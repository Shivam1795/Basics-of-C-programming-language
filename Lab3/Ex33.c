/*
@uthor: Shivam Dixit
Exercise3: Write a program to check whether the input alphabet is vowel or not using if-else and switch-case statements.
*/

#include <stdio.h>

int main() {

    // Declare a variable to take input !!
    char alpha;

    // Take input !!
    printf("\nEnter an alphabet: ");
    scanf("%c", &alpha);

    // Method 1: Check whether input alphabet is vowel or not, using if-else !!
    printf("\n!! Checking for vowel, using if-else !!\n");
    if (alpha == 'A' || alpha == 'a' || alpha == 'E' || alpha == 'e' || alpha == 'I' || alpha == 'i' || alpha == 'O' || alpha == 'o' || alpha == 'U' || alpha == 'u')
        printf("\nAlphabet '%c' is vowel\n", alpha);
    else
        printf("\nAlphabet '%c' is NOT a vowel\n", alpha);

    // Method 2: Check whether input alphabet is vowel or not, using switch statement !!
    printf("\n!! Checking for vowel, using switch-case statement !!\n");
    switch(alpha) {

        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("\nAlphabet '%c' is vowel\n", alpha);
            break;
        default:
            printf("\nAlphabet '%c' is NOT a vowel\n", alpha);

    }
    
    return 0;
}