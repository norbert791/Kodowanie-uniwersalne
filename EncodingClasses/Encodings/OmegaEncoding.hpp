#pragma once
#include <vector>
#include <iostream>
#include "Encoding.hpp"

class OmegaEncoding : public Encoding {
    public:
        void encodeSymbol(uint32_t symbol) override final;
        void closeFile() override final;
    private:
        std::vector<bool> generateCode(uint32_t symbol);
        const uint32_t msbBitMask = 2147483648;
};