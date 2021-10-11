/*
@uthor: Shivam Dixit
Exercise6: Write a Program to access an element in a 2-D integer array. (Take the size of the array and array elements as input from the user)
*/

#include <stdio.h>

int main(){

    // Declare row and columns for 2D Array !!
    int row, col;

    // Take input !!
    printf("Enter row and columns: ");
    scanf("%d%d", &row, &col);

    // Declate a 2-D integer array !! 
    int arr[row][col];

    // Take input !!
    for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){
            scanf("%d", &arr[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    // Declare variables to accept index as input(row:r and Col:c) !!
    int r, c;

    // Take input !!
    printf("\nEnter the index to access an element from 2-D array: ");
    scanf("%d%d", &r, &c);

    // Display the element !!
    printf("\nThe element is: %d\n", arr[r][c]);

    return 0;
}