// CSC 134
// M1LAB
// Cat Best
// January 27, 2025

#include <iostream>
using namespace std;

int main() {
    // This program will simulate an apple orchard. 
    // Cat Best
    string name = "Cat"
    // Number of apples owned
    int apples = 100
    // Price per apple
    double pricePerApple = 0.25

    double totalPrice = (double) apples * pricePerApple
    cout << "Welcome to " << name;
    cout << " 's apple orchard."
    << endl;
    cout << "We have " << apples;
    cout << " apples in stock"
    << endl;
    cout << "Apples are currently $";
    cout << totalPrice << " each."
    << endl;
    cout << "If you want them all, that will be $" << totalPrice
    << endl; 
}