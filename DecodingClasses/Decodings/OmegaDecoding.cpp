#include "OmegaDecoding.hpp"
#include <iostream>

void OmegaDecoding::decodeToCache() {
    
    uint32_t result = 1;
    uint64_t counter = 0;
    
    while (reader.getBit()) {
        uint32_t temp = 1;
        counter = 1;
        for (uint32_t i = 0; i < result; i++) {
            uint8_t bit = reader.getBit() ? 1 : 0;
            temp = (temp <<1) + bit;
            counter = (counter<<1) + bit;
        }
        if (counter > 0xFFFFFFFF) {
            isGood = false;
            return;
        }
        result = temp;
    }
    cache = result;
}

bool OmegaDecoding::good() {
    return isGood;
}

uint32_t OmegaDecoding::decodeSymbol() {
    auto temp = cache;
    this->decodeToCache();
    return temp;
}

void OmegaDecoding::openFile(const std::string& filename) {
    reader.open(filename);
    decodeToCache();
}