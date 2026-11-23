#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // Open file for reading
    ifstream inputFile("numbers.txt");

    // Check if file opened successfully
    if (!inputFile.is_open()) {
        cout << "Error: Could not open numbers.txt!" << endl;
        return 1;
    }

    int num;
    int sum = 0;

    cout << "Reading numbers from file..." << endl;

    // Read numbers and calculate sum
    while (inputFile >> num) {
        cout << "Read: " << num << endl;
        sum += num;
    }

    inputFile.close();

    cout << "Total Sum: " << sum << endl;

    // Create output file
    ofstream outputFile("sum.txt");

    if (!outputFile.is_open()) {
        cout << "Error: Could not create sum.txt!" << endl;
        return 1;
    }

    // Write result into file
    outputFile << "The total sum is: " << sum << endl;
    outputFile << "Calculated automatically by the C++ program." << endl;

    outputFile.close();

    cout << "Result successfully saved to sum.txt!" << endl;

    return 0;
}