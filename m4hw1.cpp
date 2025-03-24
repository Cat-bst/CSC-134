// CSC 134
// Cat Best
// 3/19/2025
// M4HW1 Bronze


#include <iostream>
using namespace std;

int main() {

    int firstNum, answer;
    firstNum = 5;

    int i = 1; 
    while (i <= 12) { 
        answer = firstNum * i;
        cout << firstNum << " times " << i << " is " << answer << endl;
        i++; 
    }

    return 0;
}
