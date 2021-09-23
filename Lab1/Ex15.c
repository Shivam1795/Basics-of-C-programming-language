/*

@uthor: Shivam Dixit
Exercise5: Write a program to calculate the area of a circle having its radius (r=5.0 cm).

" To compile it for pow() function in ubuntu20.0 use ' gcc Ex15.c -lm ' "

*/

#include <stdio.h>
#include <math.h>

int main(){

    // Declare variables to store the values of area and radius (assign value 5 to radius) !!
    float area, radius = 5.0;
    // Declare one constent pi=3.14 !!
    const float pi = 3.14;

    // Compute the area of the circle using formula " area = pi * radius^2 "  !!
    //  -->> M1: Using inbuild pow() function in math.h library (#include <math.h>) !!
    //area = pi * pow(radius, 2);

    //  -->> M2: simple multiplication (radius^2 = radius * radius) (Uncomment next line) !!
    area = pi * radius * radius;

    // Print computed area !!
    printf("Area of circle with radius 5 is: %f cm^2\n", area);

    return 0;
}