#include<vector>
#include<iostream>
#include "Encoding.hpp"

class GammaCoding : Encoding {
    public:
        void encodeSymbol(uint32_t symbol) override final;

};