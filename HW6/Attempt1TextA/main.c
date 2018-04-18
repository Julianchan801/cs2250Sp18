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
//#include "function.h"
// Constants
const int INPUT_STR_SIZE = 50;  // Input string size
// Function Prototypes
void StrSpaceToHyphen(char modString[]);
// Main Function
int main()
{

    char userStr[INPUT_STR_SIZE];   // Input string from user

    printf("Enter a sentence or phrase:\n");
    fgets(userStr, INPUT_STR_SIZE, stdin);
    printf("You entered: %s\n", userStr);

    // Call function to modify user defined string
        StrSpaceToHyphen(userStr);
           
    printf("String with hyphens: %s\n", userStr);

    return 0;
}
// Function Definitions

// Function replaces spaces with hyphens
void StrSpaceToHyphen(char modString[]) {
    int i = 0;  // Loop index

    for (i = 0; i < strlen(modString); ++i) {
        if (modString[i] == ' ') {
            modString[i] = '-';
        }//end of if statement
    }//end of for loop

    return;
}//end of function
