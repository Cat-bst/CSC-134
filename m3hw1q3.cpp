// CSC 134
// Cat Best
// 3/3/2025
// M3HW1 Question 3

#include <iostream>
#include <string>

using namespace std;

void gameOver() {
    cout << "Game Over! Better luck next time!" << endl;
}

void victory() {
    cout << "Congratulations! You've won the game!" << endl;
}

void secondChoice() {
    cout << "There's a blizzard, and you're stranded in the middle of a dense forest. You come accross a cave." << endl;
    cout << "Do you choose to keep walking until you find your way out (1) or do you enter the cave? (2)?" << endl;
    int choice;
    cin >> choice;

    if (choice == 1) {
        gameOver();
    } else if (choice == 2) {
        victory();
    } else {
        cout << "Invalid choice. Game over." << endl;
    }
}

void firstChoice() {
    cout << "You enter the cave and are shielded from the harsh weather." << endl;
    cout << "Do you choose to explore the forest (1) or stay in the cave? (2)?" << endl;
    int choice;
    cin >> choice;

    if (choice == 1) {
        secondChoice();
    } else if (choice == 2) {
        gameOver();
    } else {
        cout << "Invalid choice. Game over." << endl;
    }
}

int main() {
    cout << "Welcome to the Choose Your Own Adventure game!" << endl;
    firstChoice();
    return 0;
}