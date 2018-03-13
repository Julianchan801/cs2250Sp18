/*
 * =====================================================================================
 *
 *       Filename:  superlib.c
 *
 *    Description:  Super function definitions
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:37:26 AM
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
#include <ctype.h>
#include "superlib.h"


// Function Definitions

// Function Definitions
void StrSpaceToHyphen(char modString[]) 
{
    int i = 0;  // Loop index

    for (i = 0; i < strlen(modString); ++i)
    {
        if (modString[i] == ' ') 
        {
            modString[i] = '-';
        }
    }

    return;
}


int StrCountDigits(char modString[])
{
    int total = 0;

    for (int i = 0; i < strlen(modString); ++i)
    {
        if (isdigit( modString[i] ) ) 
        {
            total = total + 1;
        }
    }

    return total;
}

