/*
@uthor: Shivam Dixit
Exercise5: Write a Program for deletion of an element from the specified location from array. (Take the size of the array and array elements as input from the user)
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
    
    // Declare a variable to store the specified location/index to delete the element from this location !!
    int ind;
    
    // Take input !!
    printf("Enter the index to delete element:");
    scanf("%d", &ind);
    
    // Print out of range warning !!
    if(ind >= size || ind < 0)
    	printf("\nINDEX OUT OF RANGE !!");
    else{
        printf("\nDeleted element: %d", arr[ind]);
        // Remove element from specified location !!
        for(int i = ind; i < size-1; ++i)
            arr[i] = arr[i+1];
        
        // Decrese size by one !!
        --size; 
    }
    
    // Print reverse array !!
    printf("\nResulting array: ");
    for (int i  = 0; i < size; ++i)
        printf("%d ", arr[i]);

    // Goto next line !!
    printf("\n");

    return 0;

}
