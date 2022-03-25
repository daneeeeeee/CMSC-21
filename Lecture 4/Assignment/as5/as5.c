// Prepocessor Directives
#include <stdio.h>
#include <stdlib.h>
// where the program begins
int main(void)
{
    // declaring of variables using int variable type
    int days, start, i;

    // printing the instruction
    printf ("Enter the starting day of the Week (1- Sun and 7- Sat): ");
    scanf ("%d", &start); // storing the value in the variable start
    printf ("Enter number of days in a Month: "); // printing the instruction on how many days the user wants
    scanf ("%d", &days); // storing the value in the variable days
    printf ("\n");
    // a conditional on where the program will generate an invalid input if it satisfies the condition
    // didn't include 29 since February can have 29 days in a month
    if (days < 1 || days < 28 || days > 31){
        printf ("Invalid number of days input.\n");
    }
    // else statement
    else{
        printf ("Here is your calendar:\n");
        // this code is for the position of the first date (1); where will be dependent on the value of variable start
    // for loop in where; i=1 is the initialize statement, i<start is the condition and i++ is where the loop will be updated
    // this code will run as long as the condition is true
        for (i = 1; i < start; i++){
            printf ("    "); // putting four spaces in each number
        }
    // this section is for all the dates for one month; where will be dependent to the variable days
    // for loop in where; i=1 is the initialize statement, i<=days is the condition and i++ is where the loop will be updated
    // this code will run as long as the condition is true
        for (i = 1; i <= days; i++){
            printf ("%4d", i); // putting fours spaces in each number to match the spaces of the first date
            // not setting them the same will generate a chaos in the output
            if ((start + i - 1)  % 7 == 0) // condition in which will evaluate the number, since we have 7 days in a week
                printf ("\n"); // if the number when evaluated will have no remainder the next number will proceed to the new line
        }   // for example (3 + 12 - 1) = 14, so when divided by  7 it will generate 0 remainder thus number 13 will proceed to the next line
    }
    return 0;
}
