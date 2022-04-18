#pragma once

#include "Encoding.hpp"
#include <vector>

class DeltaEncoding : public Encoding {

    public:
        void encodeSymbol(uint32_t symbol) override final;
        void closeFile() override final;

    private:
       std::vector<bool> generateGammaCode(uint32_t symbol);
       const uint32_t msbBitMask = 2147483648;
};