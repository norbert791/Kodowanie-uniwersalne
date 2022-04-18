#include "DeltaEncoding.hpp"


std::vector<bool> DeltaEncoding::generateGammaCode(uint32_t symbol) {
    std::vector<bool> result = {};

    //Room for optimization: redundant bitshifts
    uint8_t length = 31;

    while ((symbol & msbBitMask) != msbBitMask && length > 0) {
        length--;
        symbol = symbol <<1;
    }

    for (auto i = 0; i < length; i++) {
        result.push_back(false);
    }
    length++;
    for (auto i = 0; i < length; i++) {
        result.push_back((symbol & msbBitMask) == msbBitMask);
        symbol = symbol <<1;
    }
    return result;
}

void DeltaEncoding::encodeSymbol(uint32_t symbol) {
    std::vector<bool> result = {};

    uint8_t length = 32;

    while ((symbol & msbBitMask) != msbBitMask && length > 0) {
        length--;
        symbol = symbol <<1;
    }

    length--;
    symbol = symbol <<1;

    while(length > 0) {
        result.push_back((symbol & msbBitMask) == msbBitMask);
        symbol = symbol <<1;
        length--;
    }

    length = result.size() + 1;
    
    auto gamma = generateGammaCode(length);

    std::cout<<gamma.size();
    /*
    for (auto t : gamma) {
        writer.writeBit(t);
    }
    for (auto t : result) {
        writer.writeBit(t);
    }*/
}

void DeltaEncoding::closeFile() { 
    for (int i = 0; i < 32; i++) {
        writer.writeBit(false);
    }
    writer.close();
}