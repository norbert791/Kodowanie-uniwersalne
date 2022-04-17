#include "GammaDecoding.hpp"

uint32_t GammaDecoding::decodeSymbol() {
    auto temp = cache;
    this->decodeToCache();
    return temp;
}

void GammaDecoding::openFile(const std::string& filename) {
    reader.open(filename);
    decodeToCache();
}

void GammaDecoding::decodeToCache() {
    constexpr uint8_t eofCode = 33;
    
    uint8_t length = 1;
    uint32_t result = 0;
    while (length < eofCode && !reader.getBit()) {
        length++;
    }
    if (length == eofCode) {
        isGood = false;
        return;
    }
    result = 1;
    length--;
    while (length > 0) {
        result = (result <<1) + (reader.getBit() ? 1 : 0);
        length--;
    }
    cache = result;
}

bool GammaDecoding::good() {
    return isGood;
}