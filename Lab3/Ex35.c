/*
@uthor: Shivam Dixit
Exercise5: Write a program that asks for a number and test the number whether it is a multiple of 5 or not.
*/

#include <stdio.h>

int main(){

    // Declare an integer variable !!
    int num;

    //Take input !!
    printf("Enter an Integer number: ");
    scanf("%d", &num);

    // Check if number is multiple of 5 or not.
    jump_flag:

    num -= 5;

    if(num > 0)
        goto jump_flag;
    
    if (num == 0)
        printf("Given number is a multiple of 5\n");
    else
        printf("Given number is NOT a multiple of 5\n");
    
    return 0;
}