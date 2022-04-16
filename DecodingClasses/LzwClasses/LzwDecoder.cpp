#include "LzwDecoder.hpp"
#include<map>

LzwDecoder::LzwDecoder(std::map<std::string, std::uint32_t> startingAlphabet, uint32_t firstCode) {
    dictionary = {};
    for (auto key : startingAlphabet) {
        dictionary.insert(std::make_pair(key.second, key.first));
    }
    auto temp = std::max_element(
        std::begin(startingAlphabet),
        std::end(startingAlphabet), 
        [] (auto p1, auto p2) {return p1.second < p2.second;}
        );
    maxCode = temp->second;
    old = firstCode;
}

std::string LzwDecoder::decode(uint32_t code) {
    std::string result;
    if (!dictionary.contains(code)) {
        result = dictionary.at(old);
        result += previousSymbol;
    }
    else {
        result = dictionary.at(code);
    }
    previousSymbol = result[0];
    dictionary.insert(std::make_pair(++maxCode, dictionary.at(old) + previousSymbol[0]));
    old = code;
    return result;
}

std::string LzwDecoder::initialize() const {
    return dictionary.at(old);
}