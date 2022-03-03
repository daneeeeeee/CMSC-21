// Prepocessor Directive
#include <stdio.h>
#include <stdlib.h>

// where the program begins
int main(void){

// Declaration of variables; an important step before giving the variables its value
// int and float are the data type and i, j, x, y, are the variables
    int i, j; // int will hold an integer value
    float x, y; // float will hold values containing decimal places

// Assigning values to the varuables i, j, x, y
    i = 10; // an integer
    j = 20; // an integer
    x = 43.2892f; // a float
    y = 5527.0f; // a float

    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);
// in this part is where it instructs the computer to do the action
// the string to be printed, followed by the sequence of variables to be printed
// %d is the format string for the data type int and %f for float
}
