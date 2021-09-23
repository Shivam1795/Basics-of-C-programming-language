/*

@uthor: Shivam Dixit
Exercise3: Write a program to multiply two numbers (10&8) and display/print its product.

*/

#include <stdio.h>

int main() {

    // a.) Without using any variable (Uncomment next line) !!
    // printf("%d", 10 * 8);

    // b.) Using "\n" ie. Newline (Uncomment next line) !!
    // printf("%d\n", 10 * 8);

    // c.) Using variables (Uncomment the block below) !!
    //    -->> Declare integer variables 'a', 'b' and 'product' and assign values to 'a' and 'b' at the time of declaration itself !!
    int product, a = 10, b = 8;

    //    -->> Perform multiplication operation !!   
    product = a * b;

    //    -->> print the value stored in product variable !!
    printf("%d\n", product);

    //    -->> Also we can print the product directly, without storing it in any variable (Uncomment next line and comment previous line) !!
    // printf("%d\n", a * b);

    return 0;

}
