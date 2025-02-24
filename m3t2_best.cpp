// CSC 134
// M3T1 
// Cat Best
// 2/19/2025


#include <iostream>
using namespace std;


int main() {

    
    double len1, wid1, len2, wid2; 
    double area1, area2;

    
    cout << "What's the length of the first rectangle? ";
    cin >> len1;
    cout << "What's the width of the first rectangle? ";
    cin >> wid1;
    cout << "What's the length of the second rectangle? ";
    cin >> len2;
    cout << "What's the width of the second rectangle? ";
    cin >> wid2;

    area1 = wid1 * len1;
    area2 = wid2 * len2;

    cout << "Rectangle one has an area of " << area1 << endl;
    cout << "Rectangle two has an area of " << area2 << endl;
    
    if (area1 > area2) {
        cout << "Rectangle one is bigger." << endl;
    }

    else if (area2 > area1) {
        cout << "Rectangle two is bigger." << endl;
    }

    else if (area1 == area2) {
        cout << "They are the same size." << endl;
    }
    
    return 0;
}