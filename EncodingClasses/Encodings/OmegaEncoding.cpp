#include "OmegaEncoding.hpp"
#include <algorithm>
#include <vector>

std::vector<bool> OmegaEncoding::generateCode(uint32_t symbol) {

    std::vector<bool> result = {};
    uint8_t length = 31;

    while ((symbol & msbBitMask) != msbBitMask && length > 0) {
        length--;
        symbol = symbol <<1;
    }
    length++;

    for (auto i = 0; i < length; i++) {
        result.push_back((symbol & msbBitMask) == msbBitMask);
        symbol = symbol <<1;
    }
    return result;
}

void OmegaEncoding::encodeSymbol(uint32_t symbol) {

    std::vector<bool> result = {false};

    auto temp = generateCode(symbol);
    std::vector<bool> temp2 = {};
    
    while (temp.size() > 1) {
        auto temp2 = move(result);
        result = temp;
        std::move(temp2.begin(), temp2.end(), std::back_inserter(result));
        temp = generateCode(temp.size() - 1);
    }

    std::for_each(result.begin(), result.end(), [this](uint32_t x){
        writer.writeBit(x);
    });
}

void OmegaEncoding::closeFile() { 
    for (int i = 0; i < 32; i++) {
        writer.writeBit(true);
    }
    writer.close();
}