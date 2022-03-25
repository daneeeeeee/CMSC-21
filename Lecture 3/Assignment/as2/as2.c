// Prepocessor Directives
#include <stdio.h>
#include <stdlib.h>

// where the program begins
int main(void)
{
    // declaring the variables in an integer variable type
    int first, second;

    // printing of instruction
    printf("Enter  two digit number: ");
    scanf("%1d%1d",&first,&second); // used %1d twice so that only the first two numbers will be stored in the variable
    // because if there's no %1d, the program will not display an output
    printf ("Number entered in words: "); // dispayed output
    // putting conditional so that the number will be breakdown into two
    if (first == 1) { // says here that if the first number is one, it will be pass on the switch case and will generate an output is the condition is fulfilled
// switch case is used when we have a number of options to choose from and each one requires a distinct task to be completed
// the variable second will be the one to be evaluated in the switch block
        switch (second % 10) { // getting the remainder because in that way will determine the second digit of the number
            //break is for the program flow to come out of the switch body
            case 0: //
                printf ("Ten"); // if the answer is zero
                break;
            case 1:
                printf ("Eleven"); // if the answer is one
                break;
            case 2:
                printf ("Twelve"); // if the answer is two
                break;
            case 3:
                printf ("Thirteen"); // if the answer is three
                break;
            case 4:
                printf ("Fourteen"); // if the answer is four
                break;
            case 5:
                printf ("Fifteen"); // if the answer is five
                break;
            case 6:
                printf ("Sixteen"); // if the answer is six
                break;
            case 7:
                printf ("Seventeen"); // if the answwer is seven
                break;
            case 8:
                printf ("Eighteen"); // if the answer is eight
                break;
            case 9:
                printf ("Nineteen"); // if the answer is nine
                break;
        }
    }
    else{

    // the following code is already outside of the conditional
        switch (first % 10) { // the first digit will be evaluated
            // break is for the program flow to come out of the switch body
            case 2:
                printf ("Twenty"); // if the first digit is two
                break;
            case 3:
                printf ("Thirty"); // if the first digit is three
                break;
            case 4:
                printf ("Forty"); // if the first digit is four
                break;
            case 5:
                printf ("Fifty"); // if the first digit is five
                break;
            case 6:
                printf ("Sixty"); // if the first digit is six
                break;
            case 7:
                printf ("Seventy"); // if the first digit is seven
                break;
            case 8:
                printf ("Eighty"); // if the first digit is eight
                break;
            case 9:
                printf ("Ninety"); // if the first digit is nine
                break;
        }
        switch (second % 10) {  // and then the second digit will be evaluated
            // by also getting the remainder of the second digit when diving to 10
            // break is for the program flow to come out of the switch body
            case 0: // if the answer is zero
                break;
            case 1:
                printf ("-one"); // if the answer is one
                break;
            case 2:
                printf ("-two"); // if the answer is two
                break;
            case 3:
                printf ("-three"); // if the answer is three
                break;
            case 4:
                printf ("-four"); // if the answer is four
                break;
            case 5:
                printf ("-five"); // if the answer is five
                break;
            case 6:
                printf ("-six"); // if the answer is six
                break;
            case 7:
                printf ("-seven"); // if the answer is seven
                break;
            case 8:
                printf ("-eight"); // if the answer is eight
                break;
            case 9:
                printf ("-nine"); // if the answer is nine
                break;
        }
    }

    return 0;
}
