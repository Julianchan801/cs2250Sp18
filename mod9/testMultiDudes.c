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
    SuperDude s1, s2;
    SuperDude ss[ASIZE]; // Array of structures
    //The & operator gives you the address
    InitInfoStruct(&s1);
    ShowInfoStruct(&s1);

    //SuperDude s2;
    s2 = CopyInfoStruct(&s1);
    ShowInfoStruct(&s2);
    //initialize your array of structs
    for(int i = 0; i < ASIZE; i++)
    {

        printf("Now array info\n");
        InitInfoStruct(&ss[i]);
        UpdateInfoStruct(&ss[i], i * 10);//update info
       // ShowInfoStruct(&ss[i]);
    }
    //Display all members of the array
    ShowInfoAllStruct(ss);//ss is an array so an address

    return 0;
}
// Function Definitions


