/*
@uthor: Shivam Dixit
 
Exercise6: Write a program to display a captcha (Defined below) to a user. A user has a maximum of three attempts to enter the correct captcha, 
            after which the program will close with a message "Maximum attempt exceeded !!" if the captcha is valid, display all the instructions 
            and asks the user to enter a choice from instructions and perform the operation given in the list of instructions.

            Captcha: Addition of two random integers ranging between 0 to 9.

            Instructions: 
                Enter 1 to divide two input numbers.
        	    Enter 2 to multiply two input numbers.
        	    Enter 3 to add two input numbers.
        	    Enter 4 for the difference between two input numbers.
*/

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {

    // Declare variables for captcha and choice !!
    int cap, rand1, rand2, attempt = 3;

    // Display message !!
    printf("\nPlease enter the correct result of operation shown in captcha to proceed further... (Max Attempts: 3) !!\n\n");

    do {
        // To generate different sets of random numbers in each attempt !!
        srand(time(0));

        // Select two random numbers between 0 to 9 to display in captcha !!
        rand1 = rand()%10; rand2 = rand()%10;

        // print Captcha and take input !!
        printf("Captcha: %d + %d = ", rand1, rand2);
        scanf("%d", &cap);
        attempt -= 1;

        // Print remaining attempts !!
        if (cap != rand1+rand2)
            printf("\nRemaining Attempts: %d\n\n", attempt);

    }while(attempt > 0 && cap != rand1+rand2);

    if(attempt == 0){
        printf("Maximum attempts exceeded !!");
        exit(0);
    }

    // Display instructions !!
    printf("Instructions:\n\nEnter 1 for the Division of two input numbers.\nEnter 2 for the Multiplication of two input numbers.\n");
    printf("Enter 3 for the sum of two input numbers.\nEnter 4 for the Difference between two input numbers.");

    // Declare an integer variable to store the choice !!
    int choice;

    // Take input !!
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    // Declare variables for operation !!
    float in1, in2;

    //Take input !!
    printf("\nEnter two numbers to perform operation: ");
    scanf("%f%f", &in1, &in2);

    switch(choice){

        case 1:
            printf("\n%0.2f / %0.2f = %0.2f", in1, in2, (in1/in2));
            break;
        case 2:
            printf("\n%0.2f * %0.2f = %0.2f", in1, in2, (in1*in2));
            break;
        case 3:
            printf("\n%0.2f + %0.2f = %0.2f", in1, in2, (in1+in2));
            break;
        case 4:
            printf("\n%0.2f - %0.2f = %0.2f", in1, in2, (in1-in2));
            break;
        default:
            printf("\nIncorrect Choice !!");
    }

    printf("\n");

    return 0;
}