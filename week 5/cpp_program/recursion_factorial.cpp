#include <iostream>
using namespace std;

// Simple recursion
int factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    }

    return n * factorialRecursive(n - 1);
}

// Tail recursion helper
int factorialTailHelper(int n, int accumulator) {
    if (n <= 1) {
        return accumulator;
    }

    return factorialTailHelper(n - 1, n * accumulator);
}

// Wrapper function
int factorialTail(int n) {
    return factorialTailHelper(n, 1);
}

int main() {
    int num;

    cout << "Enter a number to calculate factorial: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    cout << "\nUsing simple recursion:" << endl;
    cout << num << "! = " << factorialRecursive(num) << endl;

    cout << "\nUsing tail recursion:" << endl;
    cout << num << "! = " << factorialTail(num) << endl;

    cout << "\n--- Comparison ---" << endl;
    cout << "Simple recursion: Clear, matches mathematical definition." << endl;
    cout << "Tail recursion: More efficient for large n (compiler optimization)." << endl;

    return 0;
}