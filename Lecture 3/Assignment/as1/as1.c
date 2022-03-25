// Prepocessor Directives
#include <stdio.h>
#include <stdlib.h>

// where the program begins
int main()
{
    // declaring the variable using int bariable type since it will be ask for an input
    int age;
    // printing the instruction
    printf ("Enter age: ");
    scanf ("%d", &age); // value will be stored in the age variable

    // conditional statement for ages 13-19 to be called teenager
    if (age >= 13 && age <= 19);
        printf ("Teenager? %d", (age >= 13 && age <= 19));
        // instead answering true or false in the given input, it will be '1' for "true" and '0' for "false"
        // since c program don't generate true or false as an answer
    return 0;
}
