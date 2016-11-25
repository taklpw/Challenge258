/**
 * @param void
 * @return s
 * Description: To get a string input from the user to be operated on.
 *
 * Status: Working
 *
 */

#include "../includes/header.h"

char* stringInput() {
    printf("Please Enter your string\n\r");
    char *s = (char*)malloc(MAX_STRING_SIZE);
    fgets(s, sizeof(char)*MAX_STRING_SIZE, stdin);
    return s;
}