//create a C program to check if a number is enrerd by the user is a porositive or consonant using switch statement

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch (ch) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            printf("%c is a number.\n", ch);
            break;
        case 'a':
        case 'b':
        case 'c':
        // ... add all lowercase letters (a-z)
        case 'A':
        case 'B':
        case 'C':
        // ... add all uppercase letters (A-Z)
            printf("%c is an alphabet.\n", ch);
            break;
        default:
            printf("%c is a special character.\n", ch);
    }

    return 0;
}
