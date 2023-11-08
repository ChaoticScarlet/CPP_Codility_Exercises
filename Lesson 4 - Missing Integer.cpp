#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

int solution(vector<int> &A) {
    // sorts A
    sort (A.begin(), A.end());
    // smallest possible missing
    int minMissing = 1;
    
    for (int element : A) {
        // if element is negative or if it's less than min
        if (element < 1 || element < minMissing) {
            continue;
        }
        // if element is equeal to min
        else if (element == minMissing) {
            minMissing  += 1;
        }
        else {
            return minMissing;
        }
    }

    return minMissing;
}