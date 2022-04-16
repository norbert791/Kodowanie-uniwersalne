#include <vector>
#include <memory>
#include "LzwClasses/LZWEncodingProcess.hpp"
#include "Encodings/GammaEncoding.hpp"

int main(int argC, char** argV) {

    if (argC < 3) {
        std::cerr<<"Not enough arguments"<<std::endl;
        return 1;
    }
    
    LZWEncodingProcess process;

    std::vector<std::string> temp = {};

    for (size_t i = 0; i < 256; i++) {
        temp.push_back(std::string(1, i));
    }

    process.setAlphabet(temp);
    process.setSecondaryAlgorithm(std::make_unique<GammaEncoding>());
    process.runProcess(argV[1], argV[2]);

    return 0;
}