/**
 * @author Kelly Lynch
 * @date 2016-11-26
 * @file main.c
 */

#include "../includes/header.h"

/**
 * @param void
 * @return 0
 * Description: To organise the functions, get user input, and print the vowel-less and vowel
 * only lines.
 *
 * Status: Working
 */
int main() {
    char inputString[MAX_STRING_SIZE];

    strcpy(inputString, stringInput());
    printf(removeVowels(inputString));
    printf(onlyVowels((inputString)));
}






