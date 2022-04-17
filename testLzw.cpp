#include "DecodingClasses/LzwClasses/LzwDecoder.hpp"
#include "EncodingClasses/LzwClasses/LzwEncoder.hpp"
#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

int main () {

    string inputfile;
    string outputfile;
    ofstream result(outputfile);

    std::ifstream input(inputfile);

    if (input.bad()) {
        return;
    }

    std::map<std::string, uint32_t> tempMap = {}; 

    for (uint32_t i = 0; i < alphabet.size(); i++) {
        tempMap.insert(std::make_pair(alphabet[i], i + 1));
    }

    LzwEncoder temp(tempMap);

    std::string word = "";

    char symbol = input.get();

    while(symbol != EOF) {
        word = symbol;
        symbol = input.get();
        while (symbol != EOF && temp.containsSymbol(word + std::string(1, symbol))) {
            word += symbol;
            symbol = input.get();
        }
        if (symbol == EOF) {
            secondaryAlgorithm->encodeSymbol(temp.getCode(word));
            break;
        }
        secondaryAlgorithm->encodeSymbol(temp.getCode(word));
        temp.addCode(word + std::string(1, symbol));
    }
    secondaryAlgorithm->closeFile();
    return 0;
}