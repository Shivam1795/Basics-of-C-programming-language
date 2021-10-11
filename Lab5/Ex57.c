/*
@uthor: Shivam Dixit
Exercise7: Write a program to read a string and check for palindrome without using string related function.
*/

#include <stdio.h>

int main(){

    // Declare a char type array to store a string !!
    char str[50];

    // Take input !!
    // Method 1 !!
    printf("\nEnter a string: ");
    // warning: the `gets' function is dangerous and should not be used
    // as it do not consider the length of the string while reading input,
    // which leads to "segmentation fault"
    // Untill the size of given string is less then the length of defined array
    // it is it won't give any problem.
    // Most of the recent compilers stopped using it.
    //gets(str);

    // Method 2 !!
    // Recomended to use, but the problem is: 
    // while reading full line, it will read and store new line character as well !!
    fgets(str, sizeof(str), stdin);

    //print string !!
    //Method 1
    //puts(str);

    // Method 2
    /*
    for (int i  = 0; str[i] != '\0'; ++i){
        printf("%d-%c, ",i, str[i]);
    }
    */

    // Steps to check for palindrome !!

    // calculate the length of the string !!
    int len = 0;
    while(str[len] != '\0')
        ++len;

    // Check for palindrome !!
    int flag = 0;
    for(int i = 0; i < len/2; ++i)
        if (str[i] != str[len-2-i]){
            flag = 1;
            break;
        }

    // Print the results !!
    if(flag == 1)
        printf("Given string is NOT a palindrome !!\n");
    else
        printf("Given string is palindrome..\n");


    return 0;
}