#include <iostream>
using namespace std;

int main() {
string name;
string course;
string hobby;
string reason;
string expectation;
string definition;
cout << "========================================" << endl;
cout << " WELCOME TO YOUR FIRST PROGRAM!" << endl;
cout << "========================================" << endl;

cout << "1. What is your name? ";
getline(cin, name);
cout << "2. What course are you doing? (BBIT/BCS): ";
getline(cin, course);

cout << "3. What is your hobby? ";
getline(cin, hobby);

cout << "4. Why did you choose this course? ";
getline(cin, reason);

cout << "5. What do you expect to learn in programming? ";
getline(cin, expectation);

cout << "6. In your own words, what is programming? ";
getline(cin, definition);
cout << "\n========== YOUR PROFILE ==========" << endl;

cout << "Name: " << name << endl;
cout << "Course: " << course << endl;
cout << "Hobby: " << hobby << endl;
cout << "Reason for choosing course: " << reason << endl;
cout << "Programming expectation: " << expectation << endl;
cout << "Definition of programming: " << definition << endl;

cout << "==================================" << endl;
    return 0;
}