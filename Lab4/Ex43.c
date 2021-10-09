/*
@uthor: Shivam Dixit
Exercise3: Write a program to check whether a given integer number is Palindrome or not. 
	        (A palindrome number is a number that is the same after reverse)
*/

#include <stdio.h>

int main() {

    // Declare integer variables !!
    int num, num_cpy, rev_num = 0;

    // Take input !!
    printf("Enter an Integer: ");
    scanf("%d", &num);

    // Copy input number in another variable num_cpy to perform operations!!
    num_cpy = num;

    // Reversing the number !!
    while(num_cpy > 0) {

        rev_num *= 10;

        rev_num += num_cpy % 10;

        num_cpy /= 10;
    }

    // Check if number is Palindrome or not !!
    if(rev_num == num)
        printf("\nGinen number %d is a Palindrome.\n", num);
    else
        printf("\nGinen number %d is NOT a Palindrome.\n", num);

    return 0;
}