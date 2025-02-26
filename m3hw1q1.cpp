// CSC 134
// M3HW1 Question 1
// Cat Best
// 2/26/2025


#include <iostream>
using namespace std;

void chooseoption1();
void chooseoption2();

int main() {
  
  

  int choice; 

  cout << "Hello, I'm a C++ program!" << endl;
  cout << "Do you like me? Please type yes or no"; 
  cin >> choice;

  if ("Yes" == choice) {
    chooseoption1();
  }
  else if ("No" == choice) { 
    chooseoption2();
  }
  else {
    cout << "If you're not sure, that's okay." << endl;
  }

  
  return 0; 

} 

void chooseoption1() {
  
  cout << "That's great I'm sure we'll get along!" << endl;
  
}

void chooseoption2() {
  
  cout << "Well maybe you'll learn to like me later." << endl;
  
}


