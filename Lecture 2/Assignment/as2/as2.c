// Prepocessor Directives
#include <stdio.h>
#include <stdlib.h>

// where the program begins
int main(void)
{
    // declaring the variables; first thing to do before giving them value
    int number, number1, product, reverse;

    // printing the instruction
    printf ("Enter a three-digit number: ");
    scanf ("%d", &number);  // where the value will be stored, in the variable "number"
    // used %d since the variable type is an integer

    // formula in getting the reverse of a three-digit number
    number1 = number % 10; // first is getting the remainder of the given number
    //ex: 123 will become 3
    number /= 10; // to remove the last number in the variable number
    // only 12 remains
    product = number1 * 10 + number % 10; // multiply it to 10 and add to the remainder of the remaining number in the variable number
    //3 * 10 = 30 + (12 % 10)= 30 + 2 = 32
    number /= 10; // to remove the last number in the variable number
    // only 1 remain
    reverse = product * 10 + number % 10; // next is the value in the variable product will be multiplied to ten and add to the remainder of the remaining number in the variable number
    // 32 * 10 + (1 % 10) = 320 + 1 = 321 (the reverse)

    // printing the output or value in the variable reverse
    printf ("Reverse number is: %d", reverse);

    return 0;
}
