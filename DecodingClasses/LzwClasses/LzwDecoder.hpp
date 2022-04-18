#pragma once
#include<map>
#include<iostream>

class LzwDecoder {
    public:
        LzwDecoder(std::map<std::string, uint32_t> startingAlphabet, uint32_t firstCode);
        std::string decode(uint32_t code);
        std::string initialize();

    private:
        std::map<uint32_t, std::string> dictionary;
        std::string previousSymbol = "";
        //We reserve 0 for eof symbol
        uint32_t maxCode = 0;
        uint32_t old;
};