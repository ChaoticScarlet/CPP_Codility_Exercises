#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

vector<int> solution(int N, vector<int> &A) {
    // creates new vector for counters
    vector<int> counterA(N);
    // maximum value in the counter array
    int maxValue = 0;
    // for every element of A, calls respective function
    for (int element : A) {
        // if element is greater that N, sets all values from the counter array to the max
        if (element > N) {
            maxValue = *max_element(counterA.begin(), counterA.end());
            fill(counterA.begin(), counterA.end(), maxValue);
        } 
        else {
        // increases counter for element
            counterA.at(element-1) += 1;
        }     
    }    
    return counterA;
}