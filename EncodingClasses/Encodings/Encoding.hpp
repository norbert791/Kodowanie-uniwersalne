#pragma once
#include<iostream>
#include "../BitBuffers/BitWriter.hpp"

class Encoding {
    public:
        virtual void encodeSymbol(uint32_t symbol) = 0;
        void openFile(const std::string& filename);
        virtual void closeFile() = 0;
        virtual ~Encoding() = default;
        size_t getBytesWroter();
    protected:
        BitWriter writer;
};