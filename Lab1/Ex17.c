/*

@uthor: Shivam Dixit
Exercise7: Write a program to calculate simple interest for a given Principal_balance (p=4000), Time (t=2), Interest_rate (r=5.5). (I = p*r*t/100)

*/

#include <stdio.h>

int main() {

    // Declare and initialize all the required variables (Principal balance (p=4000), Time (t=2), Interest rate (r=5.5)) !!
    // -->> Integer variables !!
    int p = 4000, t = 2;
    // -->> Float variables !!
    float interest, r = 5.5;

    // Compute simple interest using formula: " interest = (Principal_balance * Interest_rate  * Time)/100 " !!
    interest = (p * r * t)/100;

    // Print computed interest (%0.2f represents print number up to only 2 places after decimal) !!
    printf("Interest = %0.2f\n", interest);

    return 0;
}