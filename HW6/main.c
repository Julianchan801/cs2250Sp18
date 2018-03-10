/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Text Analyizer
 *
 *        Version:  1.0
 *        Created:  03/04/2018 09:05:32 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>

// Function replaces spaces with hyphens
void StrSpaceToHyphen(char modString[]) {
    int i = 0;  // Loop index
    const int INPUT_STR_SIZE = 500;  // Input string size
    char newStr[INPUT_STR_SIZE];   // Input string from user
    int count = 0;

    for (i = 0; i < strlen(modString); ++i) {
        if (modString[i] != ' ') {
            newStr[count] = modString[i];
            count = count + 1;
        }
    }
    printf("String with no whitespace: %s\n", newStr);                                                                         
    
    return;
}//end of function

int GetNumOfCharacters(char modString[]) {
    int num = 0;
    for (int i = 0; i < strlen(modString) - 1; i++) {
        if (modString[i] != ' ') {
            num = num + 1;
            //printf("%d\n", num);
        }
    }
    return num;
}//end of function

//
//Main program
int main(void) {
    const int INPUT_STR_SIZE = 500;  // Input string size
    char userStr[INPUT_STR_SIZE];   // Input string from user

    // Prompt user for input
    printf("Enter string with spaces: \n");
    fgets(userStr, INPUT_STR_SIZE, stdin);

    // Call function to modify user defined string
    StrSpaceToHyphen(userStr);
    
    int value = GetNumOfCharacters(userStr);
    printf("Number of characters: %d\n", value); 
    //printf("String with hyphens: %s\n", userStr);                                                                         
    
    return 0;
}


