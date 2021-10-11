/*
@uthor: Shivam Dixit
Exercise8: Write a program to accept a string and count the number of vowels present in this string.
*/

#include <stdio.h>

int main(){

    // Declare a char type array to store a string !!
    char str[50];

    // Take input !!
    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);


    // count the vowels present in the string !!
    int count = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
            count++;
    }

    //print the results !!
    printf("\nNumber of vowels: %d\n", count);

    return 0;
}