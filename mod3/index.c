/*
 * =====================================================================================
 *
 *       Filename:  index.c
 *
 *    Description:  Use index notation to access string members
 *
 *        Version:  1.0
 *        Created:  01/25/2018 08:42:45 AM
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
    //Initialize variables
    char fName[20+1];
    char lName[20+1];

    //1) Define two strings
    //2) Get first name info
    printf("Enter your first name:\n");
    scanf("%s", fName);
    //2) Get first name info
    printf("Enter your last name:\n");
    scanf("%s", lName);
    //3) Get last name info
    //4) Display initials
    printf("Your initials are %c.%c.\n", fName[0],lName[0]);


    return 0;
}
// Function Definitions


