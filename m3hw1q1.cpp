// CSC 134
// M3HW1 Question 1
// Cat Best
// 2/26/2025


#include <iostream>
using namespace std;




void chooseoptionyes();
void chooseoptionno();

int main() {
  
  

  string choice; 

  cout << "Hello, I'm a C++ program!" << endl;
  cout << "Do you like me? Please type yes or no" << endl; 
  cin >> choice;

  if ("yes" == choice) {
    chooseoptionyes();
  }
  else if ("no" == choice) { 
    chooseoptionno();
  }
  else {
    cout << "If you're not sure, that's okay." << endl;
  }

  
  return 0; 

} 

void chooseoptionyes() {
  
  cout << "That's great I'm sure we'll get along!" << endl;
  
}

void chooseoptionno() {
  
  cout << "Well, maybe you'll learn to like me later." << endl;
  
}


