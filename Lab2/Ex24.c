/*

@uthor: Shivam Dixit
Exercise4: Write a program to calculate simple and compound interest (Take Principal_balance(p), Interest_rate(r) and Time(t) as input from the user).

" To compile it for pow() function in ubuntu20.0 use ' gcc Ex25.c -lm ' "

*/

#include <stdio.h>
#include <math.h>

int main() {

    // Declare all the required variables (Principal_balance(p), Interest_rate(r) and Time(t)) !!
    float simple_interest, compound_interest, p, r, t;

    // Display message and take Principal_balance(p), Interest_rate(r) and Time(t) as input form user !!
    printf("Enter Principal_balance(p), Interest_rate(r) and Time(t) (Time in years) : ");

    // Accept input and store in variables !!
    scanf("%f%f%f", &p, &r, &t);

    // Compute simple interest using formula: " simple_interest = (Principal_balance * Interest_rate  * Time)/100 " !!
    simple_interest = (p * r * t)/100;

    // Compute compound interest using formula: " compound_interest = Principal_balance * (1 + Interest_rate/N )^(N*t) " where, N = number of times interest applied per time period (per year)!!
    compound_interest = p * pow((1 + r), t);  // Taking (Assume) N = 1 (interest applies once per year)

    // Print computed simple interest (%0.2f represents print number up to only 2 places after decimal) !!
    printf("\nsimple_interest = %0.2f\n", simple_interest);

    // Print computed compound interest (%0.2f represents print number up to only 2 places after decimal) !!
    printf("\ncompound_interest = %0.2f\n", compound_interest);

    return 0;
}