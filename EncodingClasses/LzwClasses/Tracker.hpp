#pragma once
#include <iostream>
#include <array>
#include <string>
#include <limits>
#include <map>

class Tracker {
    public:
        void addOriginalSymbol(unsigned char symbol);
        void addEncodedSymbol(uint32_t symbol);
        void compute();
        double getOriginalEntropy();
        double getEncodedEntropy();
        size_t getOriginalLength();
        void clear();
    private:
        double originalEntropy;
        double encodedEntropy;
        std::array<size_t, 256> originalfrequencies = {};
        std::map<uint32_t, size_t> encodedFrequencies = {};
        size_t originalLength = 0;
        size_t encodedLength = 0;
};