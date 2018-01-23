/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  Strings
 *
 *        Version:  1.0
 *        Created:  01/23/2018 10:05:24 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{

    char name[11]; // Allocate 20 chars + Null char
    printf("Enter your name:\n");
    //Note if you use an array, for ex: string, 
    //Do NOT use the & address operator
    //The input ends with a space 
    scanf("%s", name);
    printf("Your name is [%s]\n", name);

    return 0;
}
// Function Definitions


