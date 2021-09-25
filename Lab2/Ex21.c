/*

@uthor: Shivam Dixit
Exercise1: Write a program to take roll_no and marks obtained by a student in 5 subjects as input and display the roll_no with percentage score secured by the student.
           (Note: For each subject, maximum marks: 100, and total strength of the class is 50 students)

*/

#include <stdio.h>

int main() {

    // Declare variables to store roll_no (from 1 to 50) and marks obtained in five different subjects !!
    int roll_no;
    float sub1, sub2, sub3, sub4, sub5, percentage;

    // Print Messages !!
    printf(" Note: For each subject, maximum marks: 100, and total strength of the class is 50 students \n");

    // Display message regarding roll no. !!
    printf(" Enter Roll No.: ");

    // Accept input value as roll no. and store it to variable roll_no !!
    scanf("%d", &roll_no);

    // Display message to enter marks obtained in five different subjects !!
    printf("\n Enter the marks obtained in five different subjects (seperated with space):");

    // Accept the first five given values (with space in between) as the marks in five different subjects and save them in variables (sub1, sub2, sub3, sub4 and sub5) !!
    scanf("%f%f%f%f%f", &sub1, &sub2, &sub3, &sub4, &sub5);

    // Calculate percentage using formula: percentage = (Total_marks_obtained * 100)/Total_maximum_marks !!
    percentage = (sub1 + sub2 + sub3 + sub4 + sub5) * 100 / 500;

    // Display roll no and percentage !!
    printf("\n\n Roll_no: %d\n Percentage score: %0.2f %c\n", roll_no, percentage, '%'); 

    return 0;
}