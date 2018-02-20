/*
 * =====================================================================================
 *
 *       Filename:  task2.c
 *
 *    Description:  Prompt for positive number, stay in loop until it is entered
 *
 *        Version:  1.0
 *        Created:  02/06/2018 10:05:02 AM
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

    int num = -1;
    while(num < 0)
    {
    printf("Please enter a positive integer >= 0: \n");
    scanf("%d", &num);
    }


    return 0;
}
// Function Definitions


