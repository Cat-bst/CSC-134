// CSC 134 
// Cat Best
// 3/3/2025
// M3HW1 Question 2

#include <iostream>
#include <iomanip>

using namespace std;

double calculateTax(double mealPrice, double taxRate = 0.08) {
    return mealPrice * taxRate;
}

double calculateTip(double mealPrice, double tipRate = 0.15) {
    return mealPrice * tipRate;
}

int main() {
    cout << "Welcome to the Receipt Calculator" << endl;

    
    double mealPrice;
    cout << "Please enter the price of the meal: $";
    cin >> mealPrice;

    
    int orderType;
    cout << "Please enter 1 if the order is dine in, 2 if it is to go: ";
    cin >> orderType;

    
    double tax = calculateTax(mealPrice);

    
    double tip = 0;

    
    if (orderType == 1) {
        tip = calculateTip(mealPrice);
    }

    
    double totalDue = mealPrice + tax + tip;

    
    cout << fixed << setprecision(2);
    cout << "\nReceipt" << endl;
    cout << "Meal Price: $" << mealPrice << endl;
    cout << "Tax: $" << tax << endl;
    if (tip > 0) {
        cout << "Tip: $" << tip << endl;
    }
    cout << "Total Amount Due: $" << totalDue << endl;

    return 0;
}