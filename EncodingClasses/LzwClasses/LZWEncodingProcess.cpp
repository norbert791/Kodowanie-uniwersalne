#include "LZWEncodingProcess.hpp"
#include "../BitBuffers/BitWriter.hpp"
#include "LzwEncoder.hpp"
#include "Tracker.hpp"

void LZWEncodingProcess::setSecondaryAlgorithm(std::unique_ptr<Encoding> encoding) {
    secondaryAlgorithm = std::move(encoding);
}

void LZWEncodingProcess::setAlphabet(const std::vector<std::string>& alphabet) {
    this->alphabet = alphabet;
}

void LZWEncodingProcess::runProcess(const std::string& inputfile, const std::string& outputfile) {

    Tracker tracker;

    std::ifstream input(inputfile);

    if (input.bad()) {
        return;
    }
    
    secondaryAlgorithm->openFile(outputfile);

    std::map<std::string, uint32_t> tempMap = {}; 

    for (uint32_t i = 0; i < alphabet.size(); i++) {
        tempMap.insert(std::make_pair(alphabet[i], i + 1));
    }

    LzwEncoder encoder(tempMap);

    std::string word = "";

    char symbol = input.get();

    tracker.addOriginalSymbol((unsigned char) symbol);

    while(input.good()) {
        word = symbol;
        symbol = input.get();
        tracker.addOriginalSymbol((unsigned char) symbol);

        while (input.good() && encoder.containsSymbol(word + std::string(1, symbol))) {
            word += symbol;
            symbol = input.get();
            tracker.addOriginalSymbol((unsigned char) symbol);
        }
        if (input.bad()) {
            uint32_t temp = encoder.getCode(word);
            tracker.addEncodedSymbol(temp);
            secondaryAlgorithm->encodeSymbol(temp);
            break;
        }
        uint32_t temp = encoder.getCode(word);
        tracker.addEncodedSymbol(temp);
        secondaryAlgorithm->encodeSymbol(temp);
        encoder.addCode(word + std::string(1, symbol));
    }
    secondaryAlgorithm->closeFile();
    
    tracker.compute();
    std::cout<<inputfile<<std::endl;
    std::cout<<"Original Entropy: "<<tracker.getOriginalEntropy()<<std::endl;
    std::cout<<"Original length: "<<tracker.getOriginalLength()<<std::endl;
    std::cout<<"Encoded Entropy: "<<tracker.getEncodedEntropy()<<std::endl;
    std::cout<<"Encoded length: "<<secondaryAlgorithm->getBytesWroter()<<std::endl;
    std::cout<<"Compression rate: "<<1.0 * tracker.getOriginalLength() / secondaryAlgorithm->getBytesWroter()<<std::endl;
}