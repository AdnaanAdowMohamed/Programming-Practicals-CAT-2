#include <stdio.h>

int main() {

    char name[50];
    char course[30];

    int score1, score2, score3, score4;
    int ch;
    int total, highest;
    

    float average, percentage;

    printf("===== STUDENT SCORE CALCULATOR =====\n");

    printf("Enter student name: ");
    scanf(" %[^\n]", name);

    printf("Enter course (BBIT/BCS): ");
    scanf(" %[^\n]", course);

    printf("\nEnter four test scores:\n");

   // TEST 1
do {
    printf("Test 1 (0-100): ");

    if (scanf("%d", &score1) != 1) {
        printf("Invalid input! Enter numbers only.\n");
        while ((ch = getchar()) != '\n' && ch != EOF);
        score1 = -1;
    }
    else if (score1 < 0 || score1 > 100) {
        printf("Invalid score! Try again.\n");
    }

} while (score1 < 0 || score1 > 100);


// TEST 2
do {
    printf("Test 2 (0-100): ");

    if (scanf("%d", &score2) != 1) {
        printf("Invalid input! Enter numbers only.\n");
        while ((ch = getchar()) != '\n' && ch != EOF);
        score2 = -1;
    }
    else if (score2 < 0 || score2 > 100) {
        printf("Invalid score! Try again.\n");
    }

} while (score2 < 0 || score2 > 100);


// TEST 3
do {
    printf("Test 3 (0-100): ");

    if (scanf("%d", &score3) != 1) {
        printf("Invalid input! Enter numbers only.\n");
        while ((ch = getchar()) != '\n' && ch != EOF);
        score3 = -1;
    }
    else if (score3 < 0 || score3 > 100) {
        printf("Invalid score! Try again.\n");
    }

} while (score3 < 0 || score3 > 100);


// TEST 4
do {
    printf("Test 4 (0-100): ");

    if (scanf("%d", &score4) != 1) {
        printf("Invalid input! Enter numbers only.\n");
        while ((ch = getchar()) != '\n' && ch != EOF);
        score4 = -1;
    }
    else if (score4 < 0 || score4 > 100) {
        printf("Invalid score! Try again.\n");
    }

} while (score4 < 0 || score4 > 100);
    total = score1 + score2 + score3 + score4;

    average = total / 4.0;

    percentage = (total / 400.0) * 100;

    highest = score1;

    if (score2 > highest)
        highest = score2;

    if (score3 > highest)
        highest = score3;

    if (score4 > highest)
        highest = score4;

    printf("\n===== STUDENT RESULTS =====\n");

    printf("Name: %s\n", name);
    printf("Course: %s\n", course);
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Highest Score: %d\n", highest);

    if (average >= 50)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");
if (average >= 70)
    printf("Grade: A\n");
else if (average >= 60)
    printf("Grade: B\n");
else if (average >= 50)
    printf("Grade: C\n");
else
    printf("Grade: D\n");
    return 0;
}