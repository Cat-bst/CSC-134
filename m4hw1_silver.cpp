// CSC 134
// Cat Best
// 3/19/2025
// M4HW1 Silver


#include <iostream>
using namespace std;

int main() {

    int userNum, answer;

    
    cout << "Enter a number from 1 to 12: ";
    cin >> userNum;

    
    if (userNum < 1 || userNum > 12) {
        cout << "Invalid input. Please run the program again and enter a number between 1 and 12." << endl;
        return 1; 
    }

    int i = 1; 
    while (i <= 12) { 
        answer = userNum * i;
        cout << userNum << " times " << i << " is " << answer << endl;
        i++; 
    }

    return 0;
}