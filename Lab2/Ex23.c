/* 

@uthor: Shivam Dixit
Exercise3: Write a C program to prompt the user to input three integer values and print these values in forward and reversed order.

*/

# include <stdio.h>

int main() {

    // Declare three integer variables (i1, i2, i3) !!
    int i1, i2, i3;

    // Display a message to ask user to give three integer values as input !!
    printf("Enter three integer values :");

    // Accept input integer values and store in variables !!
    scanf("%d%d%d", &i1, &i2, &i3);

    // Display in forward order !!
    printf("Forward order: %d, %d, %d\n", i1, i2, i3);

    // Display in reversed order !!
    printf("Reversed order: %d, %d, %d\n", i3, i2, i1);

    return 0;
}