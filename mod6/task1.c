/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Create a 10 digit array with random numbers between 0-100
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:06:18 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
// Constants
const int LEN =11;

// Function Prototypes

// Main Function
int main()
{

    srand((int)(time(0)) ); //set your seed
    int array[11];

    for(int i = 0; i < LEN; i++){
        
        array[i] = ( rand() % 101 );
        //print results
        printf("The %d values is %d\n", i + 1, array[i]);
    }

    return 0;
}
// Function Definitions


