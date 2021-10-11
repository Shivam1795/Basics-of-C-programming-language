/*
@uthor: Shivam Dixit
Exercise9: Print Pascal's triangle maximum up to a maximum of 13 rows. (Input: Number of rows)
*/

#include <stdio.h>

int main() {

    // Declare variables !!
    int rows, coef, space, i, j;
    
    // Accept input from user !!
    FLAG:
    printf("\nEnter the number of rows(Max:13) : ");
    scanf("%d",&rows);
    printf("\n");

    // Condition check for maximum number of rows and ask user to try again !!
    if(rows > 13){
        printf("ERROR:: Number must be less then 13 !! \n");
        printf("\nPlease try again:\n");
        goto FLAG;
    }

    // Outer loop to iterate over all the rows !!
    for(i=0; i<rows; i++){

        // Take care of spacing at the begning of each row !!
        for(space=1; space <= rows-i; space++)
            printf("  ");

        // Compute the elements for each location and print with proper spacing !!
        for(j=0; j <= i; j++){
            // First element in each row is always 1 !!
            if (j==0)
                coef = 1;
            // Compute the value of elements in each row (other than 0th index) !!
            else
                coef = coef*(i-j+1)/j;
            // printing elements with the proper spacing !!
            printf("%4d", coef);
        }
        // Goto next to next line to print next row !!
        printf("\n\n");
    }

    return 0;
}