/*
@uthor: Shivam Dixit
Exercise2: Write a Program to perform the addition of all elements in array. (Take the size of the array and array elements as input from the user)
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

    // Compute sum of all the elements !!
    // Declare and initialize a variable to store the sum of all array elements !!
    long int sum = 0;
    for(int i = 0; i < size; ++i)
        sum += arr[i];

    // Display the output !!
    printf("The sum of all the elements in Array = %ld\n", sum);

    return 0;
}