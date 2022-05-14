// Prepocessor Directives
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <Windows.h>

// Defining variables
#define ROW 8
#define COLUMN 8

// where the program begins
int main(void)
{
    // declaring variables
    int i, j, b;
    // the row and column of the characters
    char a [8][4] = {"A", "B", "[C]", "[D]", "E", "F", "G", "H"};
    bool road_networks [ROW][COLUMN] = {
        {1, 1, 0, 0, 0, 1, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 1, 0, 0},
        {1, 0, 0, 1, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 1, 0, 1}
    }; // the boolean values of the matrix

    printf("\t");
    //this is for the heading of the matrix
    for(i = 0; i < 8; i++){
        printf("%s\t", &a[i][0]);
    }
    printf("\n");

    // row and column of the array
    for(i = 0; i < ROW; i++){
        printf("%s\t", &a[i][0]);
        for(j = 0; j < COLUMN; j++){
            printf("%d\t", road_networks[i][j]); // this is where the array is innitialized
        }
        printf("\n");
    }
    //printing of instructions
    printf ("Which point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
    printf ("Point: ");
    scanf ("%d", &b); // storing of answer in the variable b

    // conditionals in every point
    // used sleep function for the outputs to have an interval in between
    // so the the results will not display automatically
    if (b == 0){
        printf ("Point A.\n");
        Sleep (700);
        printf ("Not at point B.\n");
        Sleep (700);
        printf ("Now arrived to point C; the charging station.");
    }
    if (b == 1){
        printf ("Point B.\n");
        Sleep (700);
        printf ("Now arrived to point C; the charging station.");
    }
    if (b == 2){
        printf ("Point C is the charging station.");
    }
    if (b == 3){
        printf ("Point D is the charging station.");
    }
    if (b == 4){
        printf ("Point E.\n");
        Sleep (700);
        printf ("Now arrived to point D; the charging station.");
    }
    if (b == 5){
        printf ("Point F.\n");
        Sleep (700);
        printf ("Now arrived to point C; the charging station.");
    }
    if (b == 6){
        printf ("Point G.\n");
        Sleep (700);
        printf ("Now arrived to point D; the charging station.");
    }
    if (b == 7){
        printf ("Point H.\n");
        Sleep (700);
        printf ("Now at point I.\n");
        Sleep (700);
        printf ("Cannot go to any charging station. No routes available.");
    }
    return 0;
}
