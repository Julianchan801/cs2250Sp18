/*
 * =====================================================================================
 *
 *       Filename:  compStrings.c
 *
 *    Description:  Comparing string values
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:05:24 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h> //To compare strings

// Constants

// Function Prototypes

// Main Function
int main()
{

    char word[51];
    char word2[51];

    printf("Enter a word:\n");
    scanf("%s", word);
    printf("You entered [%s]\n", word);

    //Compare Strings
    if(strcmp(word, "Hello") == 0){
        printf("You entered Hello\n");
    }
    else{
        printf("You did not enter Hello\n");
    }
    
    //Copy strings
    strcpy(word2, word);
    printf("[%s] and [%s]\n", word, word2);

    return 0;
}
// Function Definitions


