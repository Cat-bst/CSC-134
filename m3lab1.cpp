// CSC 134
// M3LAB1
// Cat Best
// 2/24/2025

#include <iostream>
using namespace std;

void chooseoption1();
void chooseoption2();

int main() {
  
  

  int choice; 

  cout << "You're in the wilderness late at night, from your tent you hear a strange noise. Do you go outside to investigate or stay inside the tent?" << endl;
  cout << "Type option 1 or option 2: "; 
  cin >> choice;

  if (1 == choice) {
    chooseoption1();
  }
  else if (2 == choice) {
    chooseoption2();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0; 

} 

void chooseoption1() {
  
  cout << "You chose option 1" << endl;
  cout << "It was a bear! You are mauled to death." << endl;
}

void chooseoption2() {
  
  cout << "You chose option 2" << endl;
  cout << "Thank goodness you didn't go out, it was a bear! He walks off after a few minutes." << endl;
}


