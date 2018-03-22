/*
 * =====================================================================================
 *
 *       Filename:  multiParam.c
 *
 *    Description:  Pass multiple parameters to functions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 08:44:35 AM
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
// Main Function
int main()
{
    //int a = 17;
    //double w = 250.57;
    struct Dude man1;
    man1.age = 32;
    man1.weight = 186.9;//Use dot operator to access members of the structure
    ShowInfo(man1.age, man1.weight);
    
    SuperDude man2;
    man2.age = 22;
    man2.weight = 286.9;
    man2.sex = 'M';
    ShowInfoStruct(man2);
    return 0;
}


