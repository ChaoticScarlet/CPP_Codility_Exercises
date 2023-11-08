#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/*  FOR TESTING

void printVector(vector<int> A){
    for (int element : A){
        cout << element << " ";
    }
    cout << "\n";
}

void printMap(unordered_map<int,int> B){
    for (auto pair : B) {
        cout << "Value " << pair.first << " Occurrences " << pair.second << "\n";
    }
}

*/

int solution(vector<int> &A){
    // creates map with key = element from A and value = occurrences
    unordered_map<int, int> mapOfA;
    for (int element : A){
        mapOfA[element]++;          // value +1 for the element(key)
    }
    //printMap(mapOfA);
    // if it finds an odd number of occurrences, returns that
    for (auto pair : mapOfA) {
        if ((pair.second % 2) != 0) return pair.first;
    }
    return 0;
}
