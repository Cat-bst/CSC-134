// CSC 134
// Cat Best
// 3/19/2025
// M4HW1 Gold

#include <iostream>
using namespace std;

int main() {

    int userNum, answer;

    
    do {
        cout << "Enter a number from 1 to 12: ";
        cin >> userNum;

        if (userNum < 1 || userNum > 12) {
            cout << "Invalid input. Please enter a number between 1 and 12." << endl;
        }
    } while (userNum < 1 || userNum > 12);

    
    int i = 1; 
    while (i <= 12) { 
        answer = userNum * i;
        cout << userNum << " times " << i << " is " << answer << endl;
        i++; 
    }

    return 0;
}