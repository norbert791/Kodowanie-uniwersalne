#pragma once
#include "Decoding.hpp"
#include <vector>
#include <limits>

class FibonacciDecoding : public Decoding {
    public:
        uint32_t decodeSymbol() override final;
        bool good() override final;
        void openFile(const std::string& filename) override final;
    private:
        void decodeToCache();
        bool isGood = true;
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
        uint32_t cache = 0;        
};