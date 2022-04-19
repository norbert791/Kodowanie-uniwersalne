#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>

class LzwEncoder {
    public:
        LzwEncoder(std::map<std::string, uint32_t> startingAlphabet);
        void clear();
        bool containsSymbol(std::string);
        uint32_t getCode(std::string) const;
        void addCode(std::string);

    private:
        std::map<std::string, uint32_t> dictionary;
        uint32_t maxCode = 0;
};