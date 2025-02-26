// CSC 134
// M3HW1 Question 2
// Cat Best
// 2/26/2025

#include <iostream>
using namespace std;

int main() {
    double mealPrice = 5.99;
    double taxRate = 0.08;
    double taxAmount;
    double total;

taxAmount = taxRate * mealPrice;
total = mealPrice + taxAmount;

cout << "Thank you for dining with us." << endl;
cout << "Your meal total is $" << mealPrice << endl;
cout << "The tax is $" << taxAmount << endl;
cout << "Your total is $" << total << endl;
cout << "Please come again." << endl;

}