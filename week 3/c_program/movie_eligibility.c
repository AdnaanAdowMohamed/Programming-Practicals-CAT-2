// PROGRAM 4: MOVIE ELIGIBILITY AND DISCOUNT
// Demonstrates logical operators &&, ||, !

#include <stdio.h>

int main() {

    int age;
    int hasParentalConsent;
    int isWeekend;

    // Get age
    printf("Enter age: ");
    scanf("%d", &age);

    // Get parental consent
    printf("Has parental consent? (1 for yes, 0 for no): ");
    scanf("%d", &hasParentalConsent);

    // Check weekend
    printf("Is it weekend? (1 for yes, 0 for no): ");
    scanf("%d", &isWeekend);

    // Calculate movie eligibility
    int canWatchMovie = (age >= 18) ||
                        (age >= 13 && hasParentalConsent) ||
                        (isWeekend && age >= 10);

    if (canWatchMovie) {
        printf("You can watch the movie!\n");
    } else {
        printf("Sorry, you cannot watch this movie.\n");
    }

    // Calculate discount eligibility
    int eligibleForDiscount = (age >= 65) ||
                              (age <= 12) ||
                              (isWeekend && age <= 18);

    if (eligibleForDiscount) {
        printf("You qualify for a discount!\n");
    }

    return 0;
}