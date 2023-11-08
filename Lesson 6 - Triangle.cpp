#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

int solution(vector<int> &A) {
    // A must contain at least 3 elements
    if (A.size() < 3) return 0;
    // sorts A
    sort (A.begin(), A.end());
    // for every element, adds the next one and compares to the next to that one
    for (unsigned long int i = 0; i <= A.size() - 3; i++) {
        if (A.at(i) < 0) {
            continue;
        }   
        if ((long) A.at(i) + (A.at(i + 1)) >  A.at(i + 2))  {
            return 1;
        } 
    }
    
    return 0;
}
