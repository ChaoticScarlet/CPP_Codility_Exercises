#include <iostream>
#include <vector> 
using namespace std;

vector<int> solution(vector<int> &A, int K){
    int lenghtOfA = A.size();
    int currentIndex = 0;
    int newIndex = 0;
    // creates new vector for result
    vector<int> resultA(lenghtOfA);
    // iterates elements of A creating new index based on K and size of vector for the result vector
    for (int element : A){
        // if K is > than A's lenght, make it smaller until it is in lenght range
        while (K > lenghtOfA) K = K - lenghtOfA;
        // creates new index
        newIndex = currentIndex + K;
        if (newIndex >= lenghtOfA) {
            newIndex = newIndex - lenghtOfA;
        }
        // adds element in the new vector
        resultA.at(newIndex) = element;
        currentIndex += 1;
    }
    return resultA;          
}
