#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // declaing of variables
    int row, column = 0;
    int size = 0 ;
    char cont = 'y';
    // while loop where the user will answey 'y' to the question this loop will be executed
    while(cont == 'y'){
        printf("Enter square size:"); // printing of instrution
        scanf("%d", &size); // storing the value in the variable size
        for( row = 0 ; row < size ; row++){ // for the rox of the hollow square
            for(column = 0 ; column < size; column++){ // for the column of the hollow square
                // // since we only want a hollow sqare, this condition will be modified.
                // the first row and last row and first column and last column
                if (row == 0 || row == size-1 || column == 0 || column == size-1){
                    printf("*");  // printing the result
                }else{
                    printf(" "); // printing the result
                }
            }
        printf ("\n"); // closing the loop by adding new line to it.
        }

        printf("Print another square? Enter y or n: "); // asking the user if he/she wants to continue printing square
        scanf ("%s", &cont); // storing it the variable cont, %s is the specifier for string

        if (cont == 'n'){ // if statement if the user answers 'n', means to end the program
            printf ("END"); // printing the result
        }else if(cont != 'y' && cont != 'n'){ // else if, if the answer is not 'y' nor 'x', it will execute this condition
            printf("Not a valid choice. \n"); // printing the output

            printf("Print another square Enter y/n: "); // asking the user again if he/she wants to continue
            scanf ("%s", &cont); // storing it the variable cont, %s is the specifier for string
        }
    }
    // and the cycle repeats as long as the user answers 'y' and will end only if the user nswers 'n'.
    return 0;
}
