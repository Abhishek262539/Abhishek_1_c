#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int i, length, has_upper = 0, has_lower = 0, has_digit = 0, has_special = 0;

    printf("Enter your password: ");
    fgets(password, 100, stdin);

    length = strlen(password) - 1; // Remove newline character

    // Check password length
    if (length < 8) {
        printf("Password must be at least 8 characters long.\n");
        return 1;
    }

    // Check for character types
    for (i = 0; i < length; i++) {
        if (isupper(password[i])) {
            has_upper = 1;
        } else if (islower(password[i])) {
            has_lower = 1;
        } else if (isdigit(password[i])) {
            has_digit = 1;
        } else if (!isspace(password[i])) {
            has_special = 1;
        }
    }

    // Check if all criteria are met
    if (has_upper && has_lower && has_digit && has_special) {
        printf("Password is valid.\n");
    } else {
        printf("Password must contain at least one uppercase letter, one lowercase letter, one digit, and one special character.\n");
    }

    return 0;
}
