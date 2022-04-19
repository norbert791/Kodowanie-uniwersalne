#include "FibonacciEncoding.hpp"
#include <algorithm>

size_t FibonacciEncoding::findIndex(uint32_t symbol) {

    size_t index = 0;
    auto temp = std::find_if(fibs.rbegin(), fibs.rend(), [&symbol](auto x){return x <= symbol;});
    index = fibs.rend() - temp;
    index = index == 0 ? 0 : index - 1;
    return index;
}

void FibonacciEncoding::encodeSymbol(uint32_t symbol) {
    
    auto index = findIndex(symbol);

    std::vector<bool> result(index + 2, false);
    result[index + 1] = true;
    result[index] = true;
    
    symbol -= fibs[index];

    while (symbol > 0) {
        index = findIndex(symbol);
        result[index] = true;
        symbol -= fibs[index];
    }
    for (auto bit : result) {
        writer.writeBit(bit);
    }
}

void FibonacciEncoding::closeFile() {
    for (size_t i = 0; i < fibs.size(); i++) {
        writer.writeBit(false);
    }
    writer.close();
}