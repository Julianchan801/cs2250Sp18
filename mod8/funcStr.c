/*
 * =====================================================================================
 *
 *       Filename:  funcStr.c
 *
 *    Description:  function with strings
 *
 *        Version:  1.0
 *        Created:  03/13/2018 08:19:24 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Vale (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include "superlib.h"

// Main Function
int main()
{

    const int INPUT_STR_SIZE = 50;  // Input string size
    char userStr[INPUT_STR_SIZE];   // Input string from user

    // Prompt user for input
    printf("Enter string with spaces: \n");
    fgets(userStr, INPUT_STR_SIZE, stdin);

    // Call function to modify user defined string
    StrSpaceToHyphen(userStr);

    printf("String with hyphens: %s\n", userStr);
    int t = StrCountDigits(userStr);
    printf("The number of digits you typed is: %d\n", t );

    return 0;
}

