// CSC 134
// Cat Best
// 3/19/2025
// M4HW1


#include <iostream>
using namespace std;

int main() {

    int firstNum, answer;
    firstNum = 5;

    int i = 1; // Initialize the counter
    while (i <= 12) { // Loop until i reaches 12
        answer = firstNum * i;
        cout << firstNum << " times " << i << " is " << answer << endl;
        i++; // Increment the counter
    }

    return 0;
}
