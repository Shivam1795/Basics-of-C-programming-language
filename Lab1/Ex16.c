/*

@uthor: Shivam Dixit
Exercise6: Write a program to calculate the area of an ellipse having its axes (minor_axis=4cm, major_axis=6cm).

*/

#include <stdio.h>

int main() {

    // Declare variables to store the values of area, major_axis and minor_axis (assign value 4 to minor_axis and value 6 to major_axis) !!
    float area, minor_axis = 4, major_axis = 6;
    // Declare one constent pi=3.14 !!
    const float pi = 3.14;

    // Compute the area of the ellipse using formula " area = pi * minor_axis * major_axis "  !!
    area = pi * minor_axis * major_axis;

    // Print computed area !!
    printf("Area of ellipse with minor axis 4cm and major axis 6cm is: %f cm^2\n", area);

    return 0;
}