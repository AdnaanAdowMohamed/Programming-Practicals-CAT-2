// ============================================================
// ACTIVITY 3B: STRING VERSION (C VERSION)
// Learning Outcome: Evaluate C-strings vs std::string
// ============================================================

#include <stdio.h>
#include <string.h>

int main() {

    // Declare character arrays to store strings
    char name[100];
    char copy[100];
    char greeting[120];

    // Ask the user to enter their name
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove the newline character
    name[strcspn(name, "\n")] = '\0';

    // Display the name
    printf("Name: %s\n", name);

    // Find the length of the name
    printf("Length: %lu\n", (unsigned long)strlen(name));

    // Display the first character
    if (strlen(name) > 0) {
        printf("First character: %c\n", name[0]);
    } else {
        printf("First character: None\n");
    }

    // Copy the string using strcpy()
    strcpy(copy, name);
    printf("Copy: %s\n", copy);

    // Concatenate strings using strcat()
    strcpy(greeting, "Hello, ");
    strcat(greeting, name);
    strcat(greeting, "!");

    printf("%s\n", greeting);

    return 0;
}