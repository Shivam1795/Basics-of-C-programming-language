/*
@uthor: Shivam Dixit
Exercise5: Write a program to swap the values of two variables with and without using third variables.

*/

// Include Header files !!
# include <stdio.h>

int main() {

    // Declare variables !!
    int in1, in2, a, b, c;

    // Print message for input !!
    printf("Enter two integer values for variable a and b");
    printf("\na = ");
    // Accept and store the value for a in in1 !!
    scanf("%d", &in1);
    printf("b = ");
    // Accept and store the value for b in in2 !!
    scanf("%d", &in2);

    // Assign input values to the variable a and b !!
    a = in1; b = in2;

    printf("\n Given input values are: a = %d and b = %d", a, b);

    // Method 1: Swap the values of two variables using third variable !!
    // -->>  store the value of variable a in third variable c first !!
    c = a;
    // -->>  Now, copy the value of variable b to variable a !!
    a = b;
    //  -->> Now, copy the value stored in variable c (the third variable) to variable b !!
    b = c;
    //  -->> Display the values !!
    printf("\n Values of variables after swaping (Method 1: Swap two variables values using third variable): a = %d and b = %d", a, b); 


    // Method 2: Swap the values of two variables without using third variable !!

    //Restore the values of a and b from in1 and in2 !!
    a = in1; b = in2;
    printf("\n\nVariables a and b restored to their original input values i.e.: a = %d and b = %d", a, b);

    //   a) Using addition and subtrection operations !!
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n Values of variables after swaping (Method 2,a: Swap two variables values without using third variable {Using addition and subtrection operations}): a = %d and b = %d", a, b);


    //Restore the values of a and b from in1 and in2 !!
    a = in1; b = in2;
    printf("\n\nVariables a and b restored to their original input values i.e.: a = %d and b = %d", a, b);

    //   b) Using Multiplication and Division operations !!
    a = a * b;
    b = a / b;
    a = a / b;

    printf("\n Values of variables after swaping (Method 2,b: Swap two variables values without using third variable {Using Multiplication and Division operations}): a = %d and b = %d\n", a, b);


    return 0;
}