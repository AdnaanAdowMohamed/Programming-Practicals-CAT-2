#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {

    string name, course;
    int score1, score2, score3, score4;
    int total, highest;
    double average, percentage;

    cout << "===== STUDENT SCORE CALCULATOR =====" << endl;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter course (BBIT/BCS): ";
    getline(cin, course);

    cout << "\nEnter four test scores:\n";

    // TEST 1
    do {
        cout << "Test 1 (0-100): ";

        if (!(cin >> score1)) {
            cout << "Invalid input! Numbers only.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            score1 = -1;
        }
        else if (score1 < 0 || score1 > 100) {
            cout << "Invalid score! Try again.\n";
        }

    } while (score1 < 0 || score1 > 100);


    // TEST 2
    do {
        cout << "Test 2 (0-100): ";

        if (!(cin >> score2)) {
            cout << "Invalid input! Numbers only.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            score2 = -1;
        }
        else if (score2 < 0 || score2 > 100) {
            cout << "Invalid score! Try again.\n";
        }

    } while (score2 < 0 || score2 > 100);


    // TEST 3
    do {
        cout << "Test 3 (0-100): ";

        if (!(cin >> score3)) {
            cout << "Invalid input! Numbers only.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            score3 = -1;
        }
        else if (score3 < 0 || score3 > 100) {
            cout << "Invalid score! Try again.\n";
        }

    } while (score3 < 0 || score3 > 100);


    // TEST 4
    do {
        cout << "Test 4 (0-100): ";

        if (!(cin >> score4)) {
            cout << "Invalid input! Numbers only.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            score4 = -1;
        }
        else if (score4 < 0 || score4 > 100) {
            cout << "Invalid score! Try again.\n";
        }

    } while (score4 < 0 || score4 > 100);


    // CALCULATIONS
    total = score1 + score2 + score3 + score4;

    average = total / 4.0;

    percentage = (total / 400.0) * 100;

    highest = max(max(score1, score2), max(score3, score4));


    // DISPLAY RESULTS
    cout << "\n===== STUDENT RESULTS =====\n";

    cout << "Name: " << name << endl;
    cout << "Course: " << course << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Highest Score: " << highest << endl;

    if (average >= 50)
        cout << "Result: PASS\n";
    else
        cout << "Result: FAIL\n";

    if (average >= 70)
        cout << "Grade: A\n";
    else if (average >= 60)
        cout << "Grade: B\n";
    else if (average >= 50)
        cout << "Grade: C\n";
    else
        cout << "Grade: D\n";

    return 0;
}