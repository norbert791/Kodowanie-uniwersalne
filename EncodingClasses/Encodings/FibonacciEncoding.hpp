#pragma once
#include "Encoding.hpp"
#include <limits>
#include <vector>

class FibonacciEncoding : public Encoding {
    public:
        void encodeSymbol(uint32_t symbol) override final;
        void closeFile() override final;
    private:
        std::vector<bool> generateCode(uint32_t symbol);
        const uint32_t msbBitMask = 2147483648;
        std::vector<uint32_t> fibs = [](){
            std::vector<uint32_t> result = {1,2};
            size_t i = 1;
            uint64_t temp = 1 + 2;
            while (temp <= std::numeric_limits<uint32_t>::max()) {
                result.push_back(temp);
                temp = (uint64_t) result[i] + result[i + 1];
                i++;
            }
            return result;
        } ();
        size_t findIndex(uint32_t symbol);
};