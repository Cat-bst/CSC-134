// CSC 134
// Cat Best
// 3/5/2025
// M4T1


#include <iostream> 
using namespace std;

int main () {

    int number = 5;
    int i = 0; 
    while (i < number) {
        cout << "Hello" << endl;

        i++;
    }
    cout << "That's all!" << endl;

        const int min_number = 1;
        const int max_number = 10;

        int num = min_number;

        cout << "Nuber\tNumber Squared" << endl;

        while (num <= max_number) {
            cout << num << "\t\t" << num * num << endl;

            num++;
        }
}
