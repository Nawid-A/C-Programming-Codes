#include <stdio.h> 
#include <string.h>
 
 //State clean and reverse functions
void clean(char before[], char after[]);
void reverse(char before[], char after[]);

int main() {
    char sentence[100];         //input sentence
    char cleaned[100];          //string array where the cleaned input sentence will be stored
    char reversed[100];         //string array where the reversed cleaned sentence will be stored

    printf("Enter a string of up to 100 characters: ");
    fgets(sentence, 100, stdin);        //scans sentence and stores in input array

    printf("You entered: %s", sentence);

    clean(sentence, cleaned);
    printf("Cleaned string: %s\n", cleaned);    //outputs cleaned version of input

    reverse(cleaned, reversed);
    printf("Reversed string: %s\n", reversed);  //outputs reversed version of cleaned sentence

    if (strcmp(cleaned, reversed) == 0) {       //checks if cleaned and reversed sentences are the same 
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
 
 void clean(char before[], char after[]) {
    int i, j;
    for (i = 0, j = 0; before[i] != '\0'; i++) {        //loops through each string value before end of line
        if (before[i] >= 'A' && before[i] <= 'Z') {     //checks for capital letters
            after[j++] = before[i] + ('a' - 'A');       //replaces capital for lowercase
        } else if (before[i] >= 'a' && before[i] <= 'z') {
            after[j++] = before[i];         //move on to next char if there's no capitals
        }                                   //ignores spaces and punctuation
    }
    after[j] = '\0';
}

void reverse(char before[], char after[]) {
    if (*before == '\0') {
        *after = '\0';
    } else {
        reverse(before+1, after);       //creates a stack of chars with first char at bottom and last at top
        int len = strlen(after);
        *(after + len) = *before;
        *(after + len + 1) = '\0';
    }
}
 