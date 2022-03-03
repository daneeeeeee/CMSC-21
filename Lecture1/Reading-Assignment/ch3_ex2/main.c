// Prepocessor Directive
#include <stdio.h>

// where the program begins
int main(void)
{
// Declaration of variables; an important step before giving the variables its value
// int and float are the data type and i nd x are the variables
    int i; // int will hold an integer value
    float x; // float will hold values containing decimal places

// Assigning values to the variables i and x
    i = 40;
    x = 839.21f;

// in this part is where it instructs the computer to do the action
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
// | has no special significant to printf, it just help to show how much space/s each number occupies
// %d; no spaces added, it simply print the number assigned to the variable
// %5d; uses the minimum of five characters but the value only has two, so three spaces was added BEFORE the value
// %-5d; uses the minimum of five characters but the value only has two, so three spaces was added AFTER the value
// %5.3%; uses minimum of five characters but minimum of three digits, since the value only has two so zero was added before the value
// then it still not satisfied the argument to have five characters so two spaces was added before the 040
// and it follows by the variables that was called for printing

    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
// the number before the point (.) indicates how many digit/s will the decimal will be
// %f displays the value in a fixed decimal; %e displayes the value in a exponential format; %g displays either fixed decimal or exponential format, depending in value's size
// %10.3f; uses ten characters with three digits after the decimal point, since it only has seven characters so three spaces was added before the characters
// %10.3e; uses ten characters with three digits after the decimal point
// %-10g; uses ten characters, since the value only has six characters, so four spaces was added after the value
// and it follows by the variables that was called for printing

    return 0;
}
