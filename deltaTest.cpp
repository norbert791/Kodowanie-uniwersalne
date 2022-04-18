#include <iostream>
#include "DecodingClasses/Decodings/DeltaDecoding.hpp"
#include "EncodingClasses/Encodings/DeltaEncoding.hpp"

using namespace std;

int main () {

    DeltaEncoding encoding;
    DeltaDecoding decoding;

    encoding.openFile("testfile.txt");
    encoding.encodeSymbol(128);
    encoding.encodeSymbol(255);
    encoding.closeFile();
    
    cout<<"Decoding"<<endl;
    decoding.openFile("testfile.txt");
    cout<<decoding.decodeSymbol()<<endl;
    cout<<decoding.decodeSymbol()<<endl;
    decoding.closeFile();
}