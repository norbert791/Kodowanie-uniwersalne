#pragma once
#include <iostream>
#include <memory>
#include "../Decodings/Decoding.hpp"
#include <vector>

class LZWDecodingProcess {
    public:
        void setSecondaryAlgorithm(std::unique_ptr<Decoding> encoding);
        void runProcess(const std::string& inputName, const std::string& outputName);
        void setAlphabet(const std::vector<std::string>& alphabet);

    private:
        std::unique_ptr<Decoding> secondaryAlgorithm;
        std::vector<std::string> alphabet;
};