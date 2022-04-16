#pragma once
#include<iostream>
#include "../BitBuffers/BitWriter.hpp"

class Encoding {
    public:
        virtual void encodeSymbol(uint32_t symbol) = 0;
        void openFile(const std::string& filename);
        void closeFile();
        virtual ~Encoding() = default;
    protected:
        BitWriter writer;
};