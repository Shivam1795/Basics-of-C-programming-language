/*
@uthor: Shivam Dixit
Exercise2: Write a program to print the sum of digits of a number using for loop.
*/

#include <stdio.h>

int main() {

    // Declare Integer variables for input and to store the sum !!
    int num, sum = 0;

    // Take input !!
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Compute the sum of digits !!
    for( ; num > 0; num /= 10)
        sum += num % 10;


    // Print the result !!
    printf("\nSum of the digits of input number is: %d\n", sum);

    return 0;
}