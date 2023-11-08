#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // result vector
    vector<int> result;
    // impact factors: A = 1, C = 2, G = 3, T = 4
    vector<int> intS;
    // converts original string to a vector of their values
    for (char letter : S) {
        if (letter == 'A') intS.push_back(1);
        if (letter == 'C') intS.push_back(2);
        if (letter == 'G') intS.push_back(3);
        if (letter == 'T') intS.push_back(4);
    }
    // for every range, adds min to result
    for (long unsigned int i = 0; i < P.size(); i++) {
        result.push_back(*min_element(intS.begin() + P.at(i), intS.begin() + Q.at(i) + 1));
    }
    
    return result;

}
