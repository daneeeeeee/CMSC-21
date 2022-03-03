// Prepocessor Derivative
#include <stdio.h>
#include <stdlib.h>

// where the program begins
int main(void)
{
// Declaration of variables; an important step before giving the variables its value
// int is the data type minuend, subtrahend, and difference are the variables
    int minuend, subtrahend, difference;

    minuend = 87; // it is the greater number from which the smaller number is subtracted
    subtrahend = 15; // the smaller number (the one subtracted from the minnuend)
// formula of finding the difference
    difference = minuend - subtrahend;

// instructing the computer to do the action of printing
// %d is the format string for the data type int
// printing the string, followed by the variable
    printf("The difference when you subtract %d from %d is %d", subtrahend, minuend, difference);
    printf(".\n");

    return 0;
}
