/*
@uther: Shivam Dixit
Exercise1: Write a program to count the number of digits in a given integer.
*/

#include <stdio.h>

int main(){

    // Declare an Integer variable !!
    int num, counter = 0;

    // Take input !!
    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Count number of digits using counter !!
    if (num == 0)
        counter = 1;
    else{
        while(num > 0){

            num /= 10;

            counter += 1;
        }
    }

    // Print the result !!
    printf("\nDigit count for given number is: %d\n", counter);

    return 0;
}