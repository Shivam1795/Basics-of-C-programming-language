/*

@uthor: Shivam Dixit
Exercise2: Write a program to declare two integers and one float variable, then initialize them to 10, 15, and 12.6. Also, print the variable values on the screen.

*/

# include <stdio.h>

int main() {

    // Declare two integers (a_int, b_int) and one float variable (c_float) !!
    int a_int, b_int;
    float c_float;

    // Initialize a_int to 10, b_int to 15, and c_float to 12.6 !!
    a_int = 10;
    b_int = 15;
    c_float = 12.6;

    // Display all the variable values !!
    printf("a_int = %d \nb_int = %d \nc_float = %f\n", a_int, b_int, c_float);

    return 0;
}