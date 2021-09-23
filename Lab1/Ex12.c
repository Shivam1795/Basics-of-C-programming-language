/*

@uthor: Shivam Dixit
Exercise2: Write a program to add two numbers (5&7) and display/print its sum.

*/

#include <stdio.h>

int main() {

    // a.) Without using any variable (Uncomment next line) !!
    //printf("%d", 5 + 7);

    // b.) Using "\n" ie. Newline (Uncomment next line) !!
    //printf("%d\n", 5 + 7);

    // c.) Using variables (Uncomment the block below) !!
    //    -->> Declare integer variables 'a', 'b' and 'sum' and assign values to 'a' and 'b' at the time of declaration itself !!
    int sum, a = 5, b = 7;

    //    -->> Perform sum operation !!   
    sum = a + b;

    //    -->> print the value stored in sum variable !!
    //printf("%d\n", sum);

    //    -->> Also we can print the sum directly, without storing it in any variable (Uncomment next line and comment previous line) !!
    printf("%d\n", a + b);

    return 0;

}
