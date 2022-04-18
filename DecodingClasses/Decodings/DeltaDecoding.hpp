#pragma once
#include "Decoding.hpp"

class DeltaDecoding : public Decoding {
        public:
        uint32_t decodeSymbol() override final;
        bool good() override final;
        void openFile(const std::string& filename) override final;
    private:
        void decodeToCache();
        bool isGood = true;
        uint32_t cache = 0;
};