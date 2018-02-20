/*
 * =====================================================================================
 *
 *       Filename:  for.c
 *
 *    Description:  Practice for loop
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:34:07 AM
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

    //For loop
    //1) Initialize your condition
    //2) Do your work
    //3) Up date condition
    //If still true, continue work
    //Else finish loop

    int rounds = 3;
    while(rounds != 0)
    {
        printf("Hellow there while\n");
        rounds -= 1;
    }

    rounds = 4;

    for(int r = 0; r < rounds; r++)
    {
        printf("Hello there for\n");
    }
    printf("rounds [%d]\n", rounds);
    printf("rounds [%d]\n", rounds++);
    printf("rounds [%d]\n", rounds);

    return 0;
}
// Function Definitions


