/*
 * =====================================================================================
 *
 *       Filename:  function.c
 *
 *    Description:  Function files
 *
 *        Version:  1.0
 *        Created:  03/04/2018 09:22:27 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h>
//#include <string.h>
//#include "function.h"

// Constants

// Function Prototypes
//int GetNumofCharacters( char string[101]);
//void OutputWithoutWhitespace(char string[101]);
// Function Definitions

//Func: Determines the number of characters in a sentance or phrase
//Input: A string that represents a sentance or phrase
//Output the number of characters
int GetNumofCharacters( char string[101])
{
    int count = 0;
    for(int i = 0; i < strlen(string); i++)
    {
        if(string[i] != .)
        {
            count = count + 1;
        }
    }

    return count;
}

//Function: Removes the white space or tabs from a sentance or phrase
//Input: A sentance or phrase
//Output: The sentance without any spances or tabs
void OutputWithoutWhitespace(char string[101])
{


    return;
}
