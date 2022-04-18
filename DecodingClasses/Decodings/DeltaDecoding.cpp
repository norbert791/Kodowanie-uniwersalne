#include "DeltaDecoding.hpp"

void DeltaDecoding::decodeToCache() {
    constexpr uint8_t eofCode = 33;
    
    uint8_t length = 1;
    uint32_t counter = 0;
    while (length < eofCode && !reader.getBit()) {
        length++;
    }
    if (length == eofCode) {
        isGood = false;
        return;
    }
    counter = 1;
    length--;
    while (length > 0) {
        counter = (counter <<1) + (reader.getBit() ? 1 : 0);
        length--;
    }
    counter--;

    uint32_t result = 1;

    while (counter > 0) {
        result = (result <<1) + reader.getBit() ? 1 : 0;
    }
    cache = result;
}

bool DeltaDecoding::good() {
    return isGood;
}

uint32_t DeltaDecoding::decodeSymbol() {
    auto temp = cache;
    this->decodeToCache();
    return temp;
}

void DeltaDecoding::openFile(const std::string& filename) {
    reader.open(filename);
    decodeToCache();
}