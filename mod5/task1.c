/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Multiplication tables 1-10
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:37:42 AM
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
const int MIN = 1;
const int MAX = 10;
// Function Prototypes

// Main Function
int main()
{
    int row = MIN;
    int col = MAX;

    while(row <= MAX)
    {
        while(col <= MAX)
        {
            printf("The multiplication of [%d] and [%d] is [%d]\n", row, col, row*col);
            
        }
        row++;
        col = MIN;

    }

    return 0;
}
// Function Definitions


