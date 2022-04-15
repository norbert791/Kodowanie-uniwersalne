#include "GammaDecoding.hpp"

uint32_t GammaDecoding::decodeSymbol() {

    uint8_t size = 0;
    uint32_t result = 0;
    while (!reader.getBit()) {
        size++;
    }
    while (size-- > 0) {
        result = (result <<1) + (reader.getBit() ? 1 : 0);
    }
    return result;
}