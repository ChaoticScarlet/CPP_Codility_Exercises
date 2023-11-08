#include <iostream>
 
using namespace std;

int solution(int A, int B, int K) {
    // all divisibles from 0 to B 
    int maxDivsB = B/K;
    // all divisibles from 0 to A
    int maxDivsA = A/K;
    // if A is divisible + 1
    if (A % K == 0) {
        return maxDivsB - maxDivsA + 1;
    }
    
    return maxDivsB - maxDivsA;

}
