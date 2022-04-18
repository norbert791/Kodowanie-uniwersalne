#include <iostream>
#include "DecodingClasses/Decodings/OmegaDecoding.hpp"
#include "EncodingClasses/Encodings/OmegaEncoding.hpp"

using namespace std;

int main () {

    OmegaEncoding encoding;
    OmegaDecoding decoding;

    encoding.openFile("testfile.txt");
    encoding.encodeSymbol(115);
    encoding.encodeSymbol(200);
    encoding.closeFile();
    
    cout<<"Decoding"<<endl;
    decoding.openFile("testfile.txt");
    cout<<decoding.decodeSymbol()<<endl;
    cout<<decoding.decodeSymbol()<<endl;
    decoding.closeFile();
}