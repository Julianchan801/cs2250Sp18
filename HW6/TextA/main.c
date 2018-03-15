/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Text Analyizer
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
void OutputWithoutWhitespace(char modString[]) {

    //Double check for OR VS AND!!!!
    //NOTE the length is off creating JUNK
    
    printf("String with no whitespace: ");                                                                         
    for (int i = 0; i < strlen(modString); ++i) {
        if (modString[i] != ' ' && modString[i] !='\t') {
        printf("%c", modString[i]);

        }
    }
    
    printf("\n");
    
    return;
}//end of function

int GetNumOfCharacters(char modString[]) {
    int num = 0;
    num = strlen(modString);
    /*  for (int i = 0; i < strlen(modString) -1; i++) {
        if (modString[i] != ' ' && modString[i] !='\t') {
            num = num + 1;
        }
    }//end of for loop
    */
    return num;
}//end of function

//
//Main program
int main(void) {
    const int INPUT_STR_SIZE = 500;  // Input string size
    char userStr[INPUT_STR_SIZE];   // Input string from user

    // Prompt user for input
    printf("Enter a sentence or phrase:\n");
    fgets(userStr, INPUT_STR_SIZE, stdin);
    printf("\nYou entered: %s\n", userStr);

    int value = GetNumOfCharacters(userStr);
    printf("\nNumber of characters: %d\n", value); 
    
    // Call function to output the string without white space.
    OutputWithoutWhitespace(userStr);
    
    return 0;
}


