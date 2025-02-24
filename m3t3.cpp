// CSC 134
// M3T3
// Cat Best
// 2/24/2025

#include <iostream>

#include <cmath>    

#include <ctime>
using namespace std;

int main() {
    cout << "Let's roll some dice!" << endl;
    int seed = time(0);
    
    srand(seed);

    const int MAX = 6; 
    int roll1, roll2, total;
    roll1  = (rand() % MAX) + 1; 
    cout << "Your roll was: " << roll1 << endl;

    roll2  = (rand() % MAX) + 1; 
    cout << "Your roll was: " << roll2 << endl;

    total = roll1 + roll2;
    cout << "Your total roll is: " << total << endl;

   
    if (total == 7 || total == 11) {
        cout << "You win!" << endl;
    }
    else if (total == 2 || total == 3 || total == 12) {
        cout << "You lose." << endl;
    }
    else {
        cout << "Your point is " << total << " but we'll do that part later" << endl;
    }

    return 0;
}