/*
@uthor: Shivam Dixit
Exercise1: Write a Program to search an element in an integer array. (Elements of array ranging from 0 to 9 & size of the array is 10)
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // Declare and initialize an integer array !!
    int arr[10] = {4, 5, 9, 7, 3, 0, 8, 6, 1, 2};

    // Declare a variable num to take input from user !!
    int num;

    // Take input !!
    printf("Enter a integer to search in array (Range b/w 0 to 9): ");
    scanf("%d", &num);

    // Check the range for input number !!
    if (!(num < 0 || num > 9)){
        printf("Number is out of range !!\n");
        exit(0);
    }

    // Perform a linear search and display the index !!
    for(int i = 0; i < 10; ++i)
        if(arr[i] == num) {
            printf("%d is stored at index %d.\n", num, i);
            break;
    }

    return 0;
}