#pragma once
#include<vector>
#include<iostream>
#include "Encoding.hpp"

class GammaEncoding : public Encoding {
    public:
        void encodeSymbol(uint32_t symbol) override final;
        void closeFile() override final;
};