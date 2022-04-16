#pragma once
#include "../BitBuffers/BitReader.hpp"

class Decoding {
    public:
        virtual uint32_t decodeSymbol() = 0;
        void openFile(const std::string& filename);
        void closeFile();
        bool good();
        virtual ~Decoding() = default;
    protected:
        BitReader reader;
};