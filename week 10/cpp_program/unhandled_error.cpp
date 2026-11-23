#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    cout << "Starting program..." << endl;

    throw runtime_error("Something went wrong!");

    cout << "Program completed successfully." << endl;

    return 0;
}