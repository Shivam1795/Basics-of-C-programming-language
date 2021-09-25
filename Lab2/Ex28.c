/*

@uthor: Shivam Dixit
Exercise8: Write a program to print the size of char, int, float, double and long double data types in C.

*/

# include <stdio.h>

int main() {

    // Use %lu for C89 or previous versions, and can use %lu or %zu for C99 or later versions !!

    // Method1: Using data type keywords !!
    // Size of char, int, float, double and long double data types using inbuild function "sizeof()" !!
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));

    // Method 2: Using variables of different datatypes !!
    // Declare variables !!
    char charTypeVariable;
    int intTypeVariable;
    float floatTypeVariable;
    double doubleTypeVariable;
    long double long_doubleTypeVariable;

    // sizeof() evaluates the size of a variable !!
    printf("\nUsing variable names: \n");
    printf("Size of char: %d byte\n", sizeof(charTypeVariable));
    printf("Size of int: %d bytes\n", sizeof(intTypeVariable));
    printf("Size of float: %lu bytes\n", sizeof(floatTypeVariable));
    printf("Size of double: %lu bytes\n", sizeof(doubleTypeVariable));
    printf("Size of long double: %lu bytes\n", sizeof(long_doubleTypeVariable));
    
    return 0;
}