// Prepocessor Directives
#include <stdio.h>
#include <stdlib.h>

// where the program begins
int main(void)
{
    // declaring the variables; first thing to do before giving them value
    int number, number1, product, number2, reverse;

    // printing the instruction
    printf ("Enter a two-digit number: ");
    scanf ("%d", &number);  // where the value will be stored, in the variable "number"
    // used %d since the variable type is an integer

    // formula in getting the reverse of a two-digit number
    number1 = number % 10; // first is getting the remainder of the given number
    product = number1 * 10; // multiply it to 10 to make it a tens
    number2 = number / 10; // next is to get the quotient by diving the given nnumber by ten
    reverse = product + number2; // adding the product and the quotient to get the reverse of the number

    // printing the output or value in the variable reverse\
    printf ("Reverse number is: %d", reverse);

    return 0;
}
