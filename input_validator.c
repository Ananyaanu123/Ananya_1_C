#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MIN_LENGTH 8
#define MAX_LENGTH 16

int validatePassword(char password[]) {
    int length = strlen(password);
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    if (length < MIN_LENGTH || length > MAX_LENGTH) {
        printf("Password must be between %d and %d characters long.\n", MIN_LENGTH, MAX_LENGTH);
        return 0; 
    }
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            hasUpper = 1; 
        } else if (islower(password[i])) {
            hasLower = 1; 
        } else if (isdigit(password[i])) {
            hasDigit = 1; 
        } else if (ispunct(password[i])) {
            hasSpecial = 1; 
        }
    }
    if (!hasUpper) {
        printf("Password must contain at least one uppercase letter.\n");
        return 0; 
    }
    if (!hasLower) {
        printf("Password must contain at least one lowercase letter.\n");
        return 0; 
    }
    if (!hasDigit) {
        printf("Password must contain at least one digit.\n");
        return 0; 
    }
    if (!hasSpecial) {
        printf("Password must contain at least one special character.\n");
        return 0; 
    }

    return 1; 
}

int main() {
    char password[100];
    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0;
    if (validatePassword(password)) {
        printf("Password is valid.\n");
    } else {
        printf("Password is invalid.\n");
    }

    return 0;
}


