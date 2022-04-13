#include "LzwEncoder.hpp"
#include<utility>

LzwEncoder::LzwEncoder(std::map<std::string, uint32_t> startingAlphabet) {
    dictionary = startingAlphabet;
    auto temp = std::max_element(
        std::begin(startingAlphabet),
        std::end(startingAlphabet),
        [] (auto p1, auto p2) {return p1.second < p2.second;}
        );
    maxCode = temp->second;
}

void LzwEncoder::clear() {
    dictionary.clear();
}

bool LzwEncoder::containsSymbol(std::string symbol) {
    return dictionary.contains(symbol);
}

uint32_t LzwEncoder::getCode(std::string symbol) const{
    return dictionary.at(symbol);
}

void LzwEncoder::addCode(std::string symbol) {
    dictionary.insert(std::make_pair(symbol, ++maxCode));
}
