#include <iostream>
#include <vector>
#include <numeric> 
#include <cmath>
using namespace std;

int solution(vector<int> &A) {
    // current minimun difference
    int currentMin = 0;      
    // temporal minimun
    int tempMin = 0;
    // sum of elements of A
    int sumOfA = (accumulate(A.begin(),A.end(),0));
    // sum of the parts
    int partOneSum = 0;
    int partTwoSum = 0;
    
    if (A.size() < 2) return 0;
    
    for (long unsigned i = 0; i < A.size() - 1; i++) {
        partOneSum += A.at(i);   
        partTwoSum = sumOfA - partOneSum;
        tempMin = abs(partOneSum - partTwoSum);
        if ((i == 0) || (tempMin < currentMin)) {
            currentMin = tempMin;
        }
    }
    return currentMin;    
}
