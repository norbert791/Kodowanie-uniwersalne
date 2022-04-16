#include "GammaEncoding.hpp"

void GammaEncoding::encodeSymbol(uint32_t symbol) {

    constexpr uint32_t msbBitMask = 2147483648; //hex 1000....0
    uint16_t counter = 0;

    while ( ((msbBitMask & symbol) != msbBitMask) && counter < 32) {
        counter++;
        symbol = (uint32_t) (symbol << 1);
    }

    uint16_t length = 32 - counter;

    for (int i = 0; i < length - 1; i++) {
        writer.writeBit(false);
    }

    if (length == 0) {
        writer.writeBit(false);
        return;
    }

    bool bit;
    
    for (int i = 0; i < length; i++) {
        bit = ( (msbBitMask & symbol) == msbBitMask);
        writer.writeBit(bit);
        symbol = (uint32_t) (symbol << 1);
    }

}