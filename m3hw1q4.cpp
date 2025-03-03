// CSC 134
// Cat Best
// 3/3/2025
// M3HW1 Question 4

#include <iostream>

using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

    
    int num1 = rand() % 10;
    int num2 = rand() % 10;
    
    cout << "What is " << num1 << " plus " << num2 << "?" << endl;

    int userAnswer;
    cin >> userAnswer;

    int correctAnswer = num1 + num2;

    if (userAnswer == correctAnswer) {
        cout << "Correct." << endl;
    } else {
        cout << "Incorrect." << endl;
    }

    return 0;
}