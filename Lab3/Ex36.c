/*

@uthor: Shivam Dixit
Exercise 6: Write a program to check whether the entered year is a leap year or not. 
            (Given that: A leap year is exactly divisible by 4 except for century years {years ending with 00}. 
                The century year is a leap year only if it is perfectly divisible by 400).
                (NOTE: A year is not a leap year if it is divisible by 100 but not divisible by 400).

*/

#include <stdio.h>

int main(){

    // Declare variable to store year !!
    int year;

    // Take input !!
    printf("Enter the year: ");
    scanf("%d", &year);

    if(year % 400 == 0)
        printf("%d is a Leap year\n", year);
    else if(year % 100 == 0)
        printf("%d is NOT a Leap year\n", year);
    else if(year % 4 == 0)
        printf("%d is a Leap year\n", year);
    else
        printf("%d is NOT a Leap year\n", year);

    return 0;
}