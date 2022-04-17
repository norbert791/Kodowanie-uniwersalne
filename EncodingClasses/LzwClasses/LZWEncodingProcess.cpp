#include "LZWEncodingProcess.hpp"
#include "../BitBuffers/BitWriter.hpp"
#include "LzwEncoder.hpp"

void LZWEncodingProcess::setSecondaryAlgorithm(std::unique_ptr<Encoding> encoding) {
    secondaryAlgorithm = std::move(encoding);
}

void LZWEncodingProcess::setAlphabet(const std::vector<std::string>& alphabet) {
    this->alphabet = alphabet;
}

void LZWEncodingProcess::runProcess(const std::string& inputfile, const std::string& outputfile) {

    std::ifstream input(inputfile);

    if (input.bad()) {
        return;
    }
    
    secondaryAlgorithm->openFile(outputfile);

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
}