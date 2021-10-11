/*
@uthor: Shivam Dixit
Exercise3: Write a Program to find the largest and smallest element in the array. (Take the size of the array and array elements as input from the user)
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

    // Find the largest and smallest element in Array !!
    // Declare two variables min and max to store maximun and minimum values and initialize them with first element of array !!
    int min = arr[0], max = arr[0];

    // Compare min and max with rest of the elements in array !!
    for(int i = 1; i < size; ++i){
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    // Print the results !!
    printf("Largest number = %d\nSmallest number = %d\n", max, min);

    return 0;
}