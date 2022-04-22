#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //declaring the variables
    int x;
    float y, f;

    printf ("Enter a value: "); //printnig the instruction
    scanf ("%d", &x); // storing the value in the variable x
    y = 1.0; // setting the value of y to 1
    f = (1.0/2.0)* (y + x / y); // the formula in the last box of the table
    while (fabs(f-y) >= 0.0001){ // iterating the while loop until the value will be less than or equal to tolerance
        y = f; // the variable y now will have the value of f
        f = (1.0/2.0) * (y + x / y); // will be computed again
    }
    printf ("The square root of %d is %f", x, f); //printing the result
    return 0;
}
