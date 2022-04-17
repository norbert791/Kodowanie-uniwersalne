#include "GammaEncoding.hpp"

void GammaEncoding::encodeSymbol(uint32_t symbol) {

    //Room for optimization: redundant bitshifts
    constexpr uint32_t msbBitMask = 2147483648; //hex 1000....0
    uint8_t length = 31;

    while ((symbol & msbBitMask) != msbBitMask && length > 0) {
        length--;
        symbol = symbol <<1;
    }

    for (auto i = 0; i < length; i++) {
        writer.writeBit(false);
    }
    length++;
    for (auto i = 0; i < length; i++) {
        writer.writeBit((symbol & msbBitMask) == msbBitMask);
        symbol = symbol <<1;
    }
}

void GammaEncoding::closeFile() {
    for (int i = 0; i < 32; i++) {
        writer.writeBit(false);
    }
    writer.close();
}