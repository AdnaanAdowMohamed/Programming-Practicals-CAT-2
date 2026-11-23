#include <stdio.h>

int main() {
    int height, age, hasAdult, medicalClearance, hasVipPass;

    printf("Enter height in inches: ");
    scanf("%d", &height);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Has adult accompanying? (1 yes, 0 no): ");
    scanf("%d", &hasAdult);

    printf("Has medical clearance? (1 yes, 0 no): ");
    scanf("%d", &medicalClearance);

    printf("Has VIP pass? (1 yes, 0 no): ");
    scanf("%d", &hasVipPass);

    int canRide = (height >= 48) &&
                  (age >= 12 || hasAdult) &&
                  (age <= 65 || medicalClearance) ||
                  hasVipPass;

    if (canRide) {
        printf("You can ride!\n");
    } else {
        printf("Sorry, you cannot ride.\n");
    }

    return 0;
}