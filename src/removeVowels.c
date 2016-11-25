/**
 *
 * @param str
 * @return newStr
 * Description: To remove the vowels from the given string and return this
 * altered string.
 *
 * Status: Working
 */

#include "../includes/header.h"

char* removeVowels(char* str){
    char *newStr = (char*)malloc(MAX_STRING_SIZE);

    int c = 0;
    /* If the string contains a consonant, add it to a new string*/
    int i;
    for(i = 0; i < strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == ' '){
        }else{
            newStr[c] = str[i];
            c++;
        }
    }
    newStr[c] = '\0';
    return newStr;
}