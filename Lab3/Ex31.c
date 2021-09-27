/*

@uthor: Shivam Dixit
Exercise1: Write a program to take marks of the five subjects (Physics, Chemistry, Maths, English & Biology) as input for a student. Display the marks obtained in each subject, 
            total marks and the percentage score along with his/her rank/result in the class. The rank/result is categorized as Fail (percentage < 40%), Pass & Third division 
            (percentage between 40% to 55%), Pass & Second division (percentage between 55% to 65%), Pass & First division (percentage between 65% to 80%), Pass & Distinction 
            (percentage between 80% to 95%), Pass & Extraordinary (percentage above 95%). 

*/

# include <stdio.h>

int main() {

    // Declare the variables to store marks !!
    float Physics, Chemistry, Math, English, Biology;
    // Declare variables ro store computed results !!
    float percentage;

    // Accept input (seprated by space) and store in corresponding variables !!
    printf("\nInput marks of five subjects (Physics, Chemistry, Math, English & Biology): ");
    scanf("%f%f%f%f%f", &Physics, &Chemistry, &Math, &English, &Biology);

    // Calculate percentage !!
    percentage = (Physics + Chemistry + Math + English + Biology) * 100 / 500;

    // Print marks in each subject, total marks and percentage obtained along with his/her rank in the class (as described above) !!
    printf("\nMarks obtained in each subjects are:\nPhysics: %0.2f\nChemistry: %0.2f\nMath: %0.2f\nEnglish: %0.2f\nBiology: %0.2f\n", Physics, Chemistry, Math, English, Biology);

    printf("\nTotal marks: %0.2f\n", (Physics + Chemistry + Math + English + Biology));

    printf("\nPercentage: %0.2f%c\n\n", percentage,'%');

    /*

    **** Logical operators:

          Operator	       Name                           Description
    ------------------------------------------------------------------------------------------------------------------
            &&	    Logical AND operator        If both the operands are non-zero, 
                                                then the condition becomes true.
    ------------------------------------------------------------------------------------------------------------------
            ||	    Logical OR Operator         If any of the two operands is non-zero, 
                                                then the condition becomes true.
    ------------------------------------------------------------------------------------------------------------------
            !	    Logical NOT Operator        It is used to reverse the logical state of its operand. 
                                                If a condition is true, then Logical NOT operator will make it false.
    ------------------------------------------------------------------------------------------------------------------

    */

    // if-elseif-else ladder for rank/Result !!

    if (percentage < 40)
        printf("Result: Fail\n");

    else if((percentage >= 40) && (percentage < 55))
        printf("Result: Pass, Third division\n");

    else if((percentage >= 55) && (percentage < 65))
        printf("Result: Pass, Second division\n");

    else if((percentage >= 65) && (percentage < 80))
        printf("Result: Pass, First division\n");

    else if((percentage >= 80) && (percentage < 95))
        printf("Result: Pass, Distinction\n");

    else 
        printf("Result: Pass, Extraordinary\n");

    return 0;
