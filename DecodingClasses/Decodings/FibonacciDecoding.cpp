#include "FibonacciDecoding.hpp"
#include <vector>
#include <iostream>

void FibonacciDecoding::decodeToCache() {
    
    uint32_t result = 0;
    size_t index = 0;
    bool prev = reader.getBit();
    bool next = reader.getBit();
    uint8_t zeroCounter = !prev + !next;
    result += prev ? fibs[index] : 0;
    index = 1;

    while((!prev || !next ) && zeroCounter < fibs.size()) {
        if (next) {
            result += fibs[index];
        }
        index++;
        prev = next;
        next = reader.getBit();
        zeroCounter = next ? 0 : zeroCounter + 1;
    }
    if (zeroCounter == fibs.size()) {
        isGood = false;
        return;
    }
    cache = result;
}

bool FibonacciDecoding::good() {
    return isGood;
}

uint32_t FibonacciDecoding::decodeSymbol() {
    auto temp = cache;
    this->decodeToCache();
    return temp;
}

void FibonacciDecoding::openFile(const std::string& filename) {
    reader.open(filename);
    decodeToCache();
}