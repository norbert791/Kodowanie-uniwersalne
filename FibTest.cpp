#include <iostream>
#include "DecodingClasses/Decodings/FibonacciDecoding.hpp"
#include "EncodingClasses/Encodings/FibonacciEncoding.hpp"

using namespace std;

int main () {

    FibonacciEncoding encoding;
    FibonacciDecoding decoding;

    encoding.openFile("testfile.txt");
    encoding.encodeSymbol(115);
    encoding.encodeSymbol(1);
    encoding.closeFile();
    
    cout<<"Decoding"<<endl;
    decoding.openFile("testfile.txt");
    cout<<decoding.decodeSymbol()<<endl;
    cout<<decoding.decodeSymbol()<<endl;
    decoding.closeFile();
}