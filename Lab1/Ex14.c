/*

@uthor: Shivam Dixit
Exercise4: Write a Program to calculate and display/print the volume of a CUBE having its height (h=10cm), width (w=12cm) and depth (d = 8cm).

*/

#include <stdio.h>

int main() {

    // Declare four integer variables 'h' (height), 'w' (width), 'd' (depth) and 'volume' and assign values to 'h', 'w' and 'd' at the time of declaration itself !!
    int volume, h = 10, w = 12, d = 8;

    //    -->> Calculate volume using formula: volume = height * width * depth !!   
    volume = h * w * d;

    //    -->> print the value stored in volume variable !!
    //printf("%d\n", volume);

    //    -->> Also we can print the value stored in volume variable along with a message 'Volume of the CUBE is: ' !! (Uncomment next line) !!
    printf("Volume of the CUBE is: %d cm^3\n", volume);

    return 0;

}
