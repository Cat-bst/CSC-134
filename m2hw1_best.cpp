// CSC 134
// M2HW1 - Silver
// Cat Best
// 2/5/2025

#include <iostream>

using namespace std;

int main()
{ 
    string name = "Cat";
    int startingbalance = 100;
    double amountofdeposit = 25;
    int amountwithdrawl = 50;
    int accountnum = 1031;
    cout << "What is your name? " << endl;
    cin >> name;
    cout << "What is your starting balance?" << endl;
    cin >> startingbalance;
    cout << "How much would you like to deposit?" << endl; 
    cin >> amountofdeposit;
    cout << "How much would you like to withdrawl?" << endl;
    cin >> amountwithdrawl;

    cout << "The name on the account is " << name << endl;
    cout << "The account number is " << accountnum << endl;
    cout << "Your financial account balance is $" << startingbalance + amountofdeposit - amountwithdrawl << endl;

    return 0;
}