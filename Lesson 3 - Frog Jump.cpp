#include <iostream>
using namespace std;

int solution(int X, int Y, int D){   
    // gets minimun of times that the frog needs to jump
    int minTimes = (Y - X) / D;
    // if the minimun number if times is not enought to reach the desired position, then +1 more time
    if ((minTimes * D) < Y)  minTimes += 1;
    return minTimes;
}
