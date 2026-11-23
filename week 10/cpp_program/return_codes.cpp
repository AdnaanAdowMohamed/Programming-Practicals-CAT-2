#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number <= 0) {
        cout << "Invalid number!" << endl;
        return 1;
    }

    cout << "Valid number: " << number << endl;

    return 0;
}