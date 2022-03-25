// Prepocessor Directives
#include <stdio.h>
#include <stdlib.h>
// where the program begins
int main(void)
{
    // declaring of variables using int as the variable type
    int exponent, value;
    printf ("Enter exponent value: "); // printing of instruction
    scanf ("%d", &exponent); // storing the value in the variable exponent
    // for loop
    // value=1 as the initialize statement, exponent !=0 is the condition, and exponent-- is the condition where the loop will be updated
   for (value = 1; exponent != 0; exponent--){ // as long as the value of the exponent is not 0, the code will just run until the condition satisfies
        // decrementing the value of the exponent as the code is updating so that every allue will be coomputed
        value = value * 2; // the formula in computing the powers of two
    }
    // printing the result
    printf ("The result is: %d", value);
    return 0;
}
