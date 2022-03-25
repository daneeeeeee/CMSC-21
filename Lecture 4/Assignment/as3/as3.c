// the equivalent for statement in item 1
// Prepocessor Directives
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 1;
// i is the initialize statement, i<=128 is the condition and i*=2 is where code will be updated
// just revising the form to make it a for loop, but the output will still be the same
    for (i; i<= 128; i*=2){
        printf ("%d ", i); // the same print statement
    }
    return 0;
}
