#include <stdio.h>

int main() {

    int age;
    int hasParentalConsent = 0;
    int isWeekend;

    printf("===== MOVIE ELIGIBILITY CHECKER =====\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Is it weekend? (1 for yes, 0 for no): ");
    scanf("%d", &isWeekend);

    // Ask for parental consent only for teenagers
    if (age >= 13 && age < 18) {
        printf("Do you have parental consent? (1 for yes, 0 for no): ");
        scanf("%d", &hasParentalConsent);
    }

    // Compute movie eligibility using logical operators
    // Adult OR (teen AND consent) OR (weekend AND age >= 10)

    int canWatchMovie = (age >= 18) ||
                        ((age >= 13 && hasParentalConsent) ||
                        (isWeekend && age >= 10));

    printf("\n===== MOVIE ELIGIBILITY =====\n");

    if (canWatchMovie) {
        printf("You can watch the movie.\n");
    }
    else {
        printf("Sorry, you cannot watch the movie.\n");
    }

    // Compute discount eligibility
    // Senior OR child OR (weekend AND student age <= 18)

    int isDiscountEligible = (age >= 65) ||
                             (age <= 12) ||
                             (isWeekend && age <= 18);

    printf("\n===== DISCOUNT ELIGIBILITY =====\n");

    if (isDiscountEligible) {
        printf("You qualify for a discount!\n");
    }
    else {
        printf("You do not qualify for a discount.\n");
    }

    return 0;
}