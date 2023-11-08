#include <iostream>
#include <string>
using namespace std;

string toBinary(int N) {
    if (N < 2) return to_string(N);
    else if (N%2 == 0) return toBinary(N/2) + "0";
    else return toBinary(N/2) + "1";
}

int binaryGap(int N){
    // N to binary
    string nBinary = toBinary(N);
    // get max binary gap
    int currentMaxBG = 0;
    int counter = 0; 
    
    for (auto nchar : nBinary) {
        if (nchar == '1'){
            if (counter > currentMaxBG) {      
                currentMaxBG = counter;   
            }
            counter = 0;
        }
        else {
            counter += 1;
        }     
    }
    return currentMaxBG;  
}

