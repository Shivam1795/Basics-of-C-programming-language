/*

@uthor: Shivam Dixit
Exercise2: Write a program to find the largest and smallest among three entered numbers.

*/

#include <stdio.h>

int main(){

    // Declare three variables !!
    float num1, num2, num3, max, min;

    // Message for input !!
    printf("Input three numbers:");

    // Accept input !!
    scanf("%f%f%f", &num1, &num2, &num3);

    // Find the largest and the smallest numbers !!
    max = num1;
    min = num1;

    if (max <= num2)
        max = num2;
    else
        min = num2;

    if (max <= num3)
        max = num3;
    if (min > num3)
        min = num3;

    // Print Largest and Smallest number !!
    printf("Largest: %0.2f\nSmallest: %0.2f\n", max, min);
    return 0;
}