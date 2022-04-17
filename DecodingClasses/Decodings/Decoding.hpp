#pragma once
#include "../BitBuffers/BitReader.hpp"

class Decoding {
    public:
        virtual uint32_t decodeSymbol() = 0;
        virtual void openFile(const std::string& filename);
        void closeFile();
        virtual bool good() = 0;
        virtual ~Decoding() = default;
    protected:
        BitReader reader;
};