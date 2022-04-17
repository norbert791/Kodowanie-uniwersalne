#include "LZWDecodingProcess.hpp"
#include "LzwDecoder.hpp"

void LZWDecodingProcess::setSecondaryAlgorithm(std::unique_ptr<Decoding> encoding) {
    secondaryAlgorithm = std::move(encoding);
}

void LZWDecodingProcess::setAlphabet(const std::vector<std::string>& alphabet) {
    this->alphabet = alphabet;
}

void LZWDecodingProcess::runProcess(const std::string& inputName, const std::string& outputName) {

    std::ofstream output(outputName);
    
    if (!output.good()) {
            return;
    }

    secondaryAlgorithm->openFile(inputName);

    std::map<std::string, uint32_t> tempMap = {}; 

    for (uint32_t i = 0; i < alphabet.size(); i++) {
        tempMap.insert(std::make_pair(alphabet[i], i + 1));
    }

    LzwDecoder decoder(tempMap, secondaryAlgorithm->decodeSymbol());

    std::string temp = decoder.initialize();
    output<<temp;

    while (secondaryAlgorithm->good()) {
        temp = decoder.decode(secondaryAlgorithm->decodeSymbol());
        output<<temp;
    }
    secondaryAlgorithm->closeFile();
}