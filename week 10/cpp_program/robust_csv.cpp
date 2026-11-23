#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream file("students.csv");

    if (!file.is_open()) {
        cout << "Error: Could not open students.csv" << endl;
        return 1;
    }

    string line;

    cout << "===== STUDENT RECORDS =====" << endl;

    while (getline(file, line)) {
        stringstream ss(line);
        string name, course, marks;

        getline(ss, name, ',');
        getline(ss, course, ',');
        getline(ss, marks, ',');

        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
        cout << "----------------------" << endl;
    }

    file.close();

    return 0;
}