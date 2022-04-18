#include <iostream>
#include "DecodingClasses/Decodings/DeltaDecoding.hpp"
#include "EncodingClasses/Encodings/DeltaEncoding.hpp"

using namespace std;

int main () {

    DeltaEncoding encoding;
    DeltaDecoding decoding;

    encoding.openFile("testfile.txt");
    encoding.encodeSymbol(123);
    encoding.closeFile();

    decoding.openFile("testfile.txt");
    cout<<decoding.decodeSymbol()<<endl;
    decoding.closeFile();
}