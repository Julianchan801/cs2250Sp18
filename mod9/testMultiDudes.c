/*
 * =====================================================================================
 *
 *       Filename:  testMultiDudes.c
 *
 *    Description:  Test multiple structures in functions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:37:32 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "dude.h"

// Constants

// Function Prototypes

// Main Function
int main()
{
    SuperDude s1;
    //The & operator gives you the address
    InitInfoStruct(&s1);
    ShowInfoStruct(&s1);

    return 0;
}
// Function Definitions


