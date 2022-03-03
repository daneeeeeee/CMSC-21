// Prepocessor Directive
#include <stdio.h>

// where the program begins
int main (void)
{
// Declaration of variables; an important step before giving the variables its value
// int is data type and num1, denom1, num2, denom2, result_num, result_denom are the variables
    int num1, denom1, num2, denom2, result_num, result_denom;

//printing the statement
// scanf is like a user input; %d conversion specifier that signifies the data should be integer; second and third argument is where the value of %d will be stored (in order)
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

// the fourmula to find the numerator of the fraction; multiplying the first numerator to the second denominator
// and the second numerator to the first denominator then add
    result_num = num1 * denom2 + num2 * denom1;
// formula to get the denominator of the fraction is by simply multiply the two denominators
    result_denom = denom1 * denom2;

//instructing the computer to do the action
// the string to be printed, followed by the sequence of variables to be printed
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
