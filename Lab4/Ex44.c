/*
@uthor: Shivam Dixit
Exercise4: Write a program to generate the Fibonacci series. (Input: length of the series)
*/

#include <stdio.h>

int main() {

    // Declare variables !!
    int num;
    long long fib_n2 = 1, fib_n1 = 1, fib;

    // Take input !!
    printf("Enter the series length: ");
    scanf("%d", &num);

    // Print Fibonacci series !!
    for(int i = 0; i < num; ++i){

        if(i == 0){

            fib = fib_n1;

        }else if(i == 1){

            fib = fib_n2;

        }else{
            
            fib = fib_n2 + fib_n1;
            fib_n1 = fib_n2;
            fib_n2 = fib;

        }

        // Print the number at each iteration !!
        printf("%lld ", fib);

    }

    printf("\n");

    return 0;
}