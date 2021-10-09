/*

@uthor: Shivam Dixit
Exercise5: Write a program to display the following pattern.  
            * 
            * * 
            * * * 
            * * * * 
            * * * * * 

*/

#include <stdio.h>

int main(){

    // Print given pattern using nested loop !!
    for(int i = 1; i <= 5; ++i) {

        for(int j = 1; j <= i; ++j)

            printf("* ");
            
        printf("\n");
    }
    return 0;
}