#include <vector>
#include <memory>
#include "LzwClasses/LZWEncodingProcess.hpp"
#include "Encodings/GammaEncoding.hpp"
#include "Encodings/DeltaEncoding.hpp"
#include <string>
#include "string.h"

int main(int argc, char** argv) {

    if (argc < 3) {
        std::cerr<<"Not enough arguments"<<std::endl;
        return 1;
    }
    
    LZWEncodingProcess process;

    std::vector<std::string> temp = {};

    for (size_t i = 0; i < 256; i++) {
        temp.push_back(std::string(1, i));
    }

    process.setAlphabet(temp);
    if (argc == 4 && strlen(argv[3]) == 2 && argv[3][0] == '-') {
        switch (argv[3][1])
        {
        case 'g':
            process.setSecondaryAlgorithm(std::make_unique<GammaEncoding>());
            break;
        case 'd':
            process.setSecondaryAlgorithm(std::make_unique<DeltaEncoding>());
            break;
        default:
            process.setSecondaryAlgorithm(std::make_unique<GammaEncoding>());
            break;
        }
    }
    else {
        process.setSecondaryAlgorithm(std::make_unique<GammaEncoding>());
    }
    process.runProcess(argv[1], argv[2]);

    return 0;
}