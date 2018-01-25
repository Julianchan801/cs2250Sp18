/*
 * =====================================================================================
 *
 *       Filename:  random.c
 *
 *    Description:  Learn how to use random numbers
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:52:00 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> //for random numbers or rand()
#include <time.h> // for srand() function: to set your random seed

// Constants

// Function Prototypes

// Main Function
int main()
{

    //Sewt your random seed
    srand( (int)time(0) );
    printf("A random num[%d]\n", (rand() % 101) );
    printf("A random num[%d]\n", (rand() % 101) );
    printf("A random num[%d]\n", (rand() % 101) );
    printf("A random num[%d]\n", (rand() % 101) );



    return 0;
}
// Function Definitions


