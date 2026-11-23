// PROGRAM 9: RIDE ELIGIBILITY (C VERSION)

#include <stdio.h>

int main() {

    int height;
    int age;
    int hasAdult;
    int medicalClearance;
    int hasVipPass;

    // Get user information
    printf("Enter height (in inches): ");
    scanf("%d", &height);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Has adult? (1/0): ");
    scanf("%d", &hasAdult);

    printf("Has medical clearance? (1/0): ");
    scanf("%d", &medicalClearance);

    printf("Has VIP pass? (1/0): ");
    scanf("%d", &hasVipPass);

    // Calculate ride eligibility
    int canRide = (height >= 48) &&
                  (age >= 12 || hasAdult) &&
                  (age <= 65 || medicalClearance || hasVipPass);

    // Display result
    if (canRide) {
        printf("\nYou can ride!\n");
    }
    else {
        printf("\nSorry, you cannot ride.\n");
    }

    return 0;
}