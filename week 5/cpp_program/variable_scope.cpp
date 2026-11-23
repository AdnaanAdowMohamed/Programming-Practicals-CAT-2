#include <iostream>
using namespace std;

// Global variable
int globalCounter = 100;

// Display the global variable
void displayGlobal() {
    cout << "Inside displayGlobal: globalCounter = "
         << globalCounter << endl;
}

// Modify the global variable
void modifyGlobal() {
    globalCounter = 500;
    cout << "Inside modifyGlobal: globalCounter changed to "
         << globalCounter << endl;
}

// Demonstrate a local variable
void localDemo() {
    int globalCounter = 999;
    cout << "Inside localDemo: globalCounter = "
         << globalCounter << endl;
}

int main() {
    int localCounter = 50;

    cout << "In main: globalCounter = " << globalCounter << endl;
    cout << "In main: localCounter = " << localCounter << endl;

    displayGlobal();
    modifyGlobal();
    localDemo();

    cout << "Back in main: globalCounter = "
         << globalCounter << endl;

    return 0;
}