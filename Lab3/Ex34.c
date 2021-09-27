/*

@uthor: Shivam Dixit
Exercise4: Write a program to get input of two or higher digit integer number and display in reverse order.

*/

#include <stdio.h>

int main(){

    // Declare integer variables (rev_num to store reverse of the input number) !!
    int num, rev_num = 0;

    // Take input !!
    printf("Enter a two or higher digit integer number: ");

    scanf("%d", &num);

    // Compute reverse of number !!
    jump_flag:

    rev_num *= 10;

    rev_num += num % 10;

    num /= 10;

    if (num > 0)
        goto jump_flag;

    // Print reverse of the number !!
    printf("Reverse of the number is: %d\n", rev_num);

    return 0;
}