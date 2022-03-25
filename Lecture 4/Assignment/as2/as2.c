// Prepocessor Directives
#include <stdio.h>
#include <stdlib.h>
// where the program begins
int main(void)
{
    // declaration of variable
    int i = 1;
// the while loop
    while (i < 10){
        printf ("%d ", i);
        i *= 2;
    }
// the for loop
    for (i; i < 10; i *= 2){
        printf ("%d ", i);
    }
// the do-while loop
    do {
        printf ("%d ", i);
        i *= 2;
    }while (i < 10);

    return 0;
}
