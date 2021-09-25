/*
@uthor: Shivam Dixit
Exercise 6: Write a program to check if a given number is odd or even, using the modulus operator.

*/

# include <stdio.h>

int main() {

    // Declare integer variable and take input !!
    int in;

    // Display message !!
    printf("Enter a integer value: ");
    // Store input value in variable in !!
    scanf("%d", &in);

    // Ckeck if given number is even or odd and display the result !!
    if (in % 2 == 0)
        printf("%d is Even.\n",in);
    else
        printf("%d is Odd.\n",in);

    return 0;
}