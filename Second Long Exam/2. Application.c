#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

// function that need to be added
void scan_word(int *occurences) { // operating the array using pointers
    char c; //declaring variable
    while ((c = getchar()) != '\n') { // where the words are being scanned
        if (isalpha(c)){  // function that checks whether a character is an alphabet or not
            occurences[toupper(c) - 'A']++; // the letters to e uniformed; all in uppercase
        }
    }
}
int i;
// function that need to be added
bool is_anagram(int occurences1[26], int occurences2[26]) { // passing the two arrays
    bool anagram = true;
    for (i = 0; i < 26; i++) {  // where the letters are evaluated
        if (occurences1[i] != occurences2[i]) {  // function where to check if both arrays have the same indexes
            anagram = false;
            break;
        }
    }
    return anagram;
}

int main(void) {

    int letter[26] = {0}, letter2[26] = {0}; // declaring variables

    printf("Enter first word: "); // printing of instructions
    scan_word(letter); // calling the function

    printf("Enter second word: ");
    scan_word(letter2);


    if (is_anagram(letter, letter2)) {  // calling the function
        printf("The words are anagrams.\n");  // if the function is met
        return 0;
    }
    printf("The words are not anagrams.\n");  // if not
    return 0;
}
