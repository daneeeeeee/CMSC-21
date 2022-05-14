#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_PATHWAYS ((int) (sizeof(pathway)/ sizeof(pathway[0])))

int i;
int main(void){
    /*
    A boolean array that contains true/false values referring to
    whether a certain pathway is openclose for transportaion.

    Only pathways 0 and 3 are open for transportation. The rest are close.

    */

    bool pathway [8] = {[0] = 1, [2] = 1};
    for (i = 0; i < NUM_PATHWAYS; i++){

        /*
        Display the status of each pathway.
        Remember that pathway is type bool so its elements are either true/false - 1/0.

        */

        if (pathway[i]){
            printf ("pathway[%d] is open \n", i);
        }else{
            printf ("pathway[%d] is close \n", i);
        }
    }
    return 0;
}
