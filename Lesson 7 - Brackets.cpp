#include <iostream>
#include <string>
#include <stack> 
 
using namespace std;

int solution(string &S) {
    // creates stack
    stack<char> stackS;
    
    for (char bracket : S) {
        // pushes brackets, as long as they are openers
        if (bracket == '(' || bracket == '[' || bracket == '{') {
            stackS.push(bracket);
        }
        // if bracket is a closing one, peeks at the top and if they match, pops
        else if ((bracket == ')' && stackS.top() == '(') 
                || (bracket == ']' && stackS.top() == '[')
                || (bracket == '}' && stackS.top() == '{')) {
            stackS.pop();
        }
        else {
            return 0;
        }
    }
    // is stack is empty it means it's properly nested
    if (stackS.size() == 0) return 1;
    else return 0;
}