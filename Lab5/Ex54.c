/*
@uthor: Shivam Dixit
Exercise4: Write a Program to reverse the array elements in C Programming. (Take the size of the array and array elements as input from the user)
*/

#include <stdio.h>

int main() {

    // Declare a variable to store the size of the array !!
    int size;

    // Take size of the array as input !!
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an integer array of given size !!
    int arr[size];

    // Take input from user for the integer elements of the array !!
    printf("\nEnter the elements of Integer array: ");
    for(int i = 0; i < size; ++i)
        scanf("%d", &arr[i]);
    
    // Declare a variable pivot to store a pivot index (taking this as a center we will swap the elements) !!
    int pivot = size/2;

    // Reversing the array elements !!
    for(int i = 0; i < pivot; ++i) {

            arr[i] += arr[size-1-i];
            arr[size-1-i] = arr[i] - arr[size-1-i];
            arr[i] = arr[i] - arr[size-1-i];
    }

    // Print reverse array !!
    printf("Reverse array: ");
    for (int i  = 0; i < size; ++i)
        printf("%d ", arr[i]);

    // Goto next line !!
    printf("\n");

    return 0;

}