// CSC 134
// M2HW1 - Silver
// Cat Best
// 2/5/2025

#include <iostream>

using namespace std;

int main()
{ 
    
    int numofpizzas = 3;
    int slicesperpizza = 8;
    int numofvisitors = 18;
   

    cout << "How many pizzas do you want to order? " << endl;
    cin >> numofpizzas;
    cout << "How many slices do you want each pizza to have?" << endl;
    cin >> slicesperpizza;
    cout << "How many visitors are coming?" << endl; 
    cin >> numofvisitors;
   

    cout << "There will be " << numofpizzas * slicesperpizza - numofvisitors << " slices of pizza leftover." << endl;

    return 0;
}