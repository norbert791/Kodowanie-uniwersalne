#include "Tracker.hpp"
#include <cmath>

void Tracker::addOriginalSymbol(unsigned char symbol) {
    originalfrequencies[symbol]++;
    originalLength++;
}

void Tracker::addEncodedSymbol(uint32_t symbol) {
    if (!encodedFrequencies.contains(symbol)) {
        encodedFrequencies.insert(std::make_pair(symbol, 0));
    }
    encodedFrequencies[symbol]++;
    encodedLength++;
}

void Tracker::compute() {
    double result = 0.0;

    for (auto freq : originalfrequencies) {
        double temp = 1.0 * freq / originalLength;
        result += temp == 0 ? 0 : temp * log2(temp);
    }
    originalEntropy = -result;

    result = 0.0;

    for (auto freq : encodedFrequencies) {
        double temp = 1.0 * freq.second / encodedLength;
        result += temp == 0 ? 0 : temp * log2(temp);
    }
    encodedEntropy = -result;
}

void Tracker::clear() {
    originalEntropy = 0;
    originalfrequencies = {};
    originalLength = 0;
}

size_t Tracker::getOriginalLength() {
    return originalLength;
}

double Tracker::getOriginalEntropy() {
    return originalEntropy;
}

double Tracker::getEncodedEntropy() {
    return encodedEntropy;
}