/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  Multiplication tables with for loops
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:52:11 AM
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

const int COL = 10;
const int ROW = 10;
// Function Prototypes

// Main Function
int main()
{

    for(int i =1; i <= ROW; i++){
        for(int j =1; j <= COL; j++){
            printf(" The multiplication of [%3d] and [%3d] is [%3d]\n", i, j, i * j);

        }//End of COL

    }//END of ROW

    return 0;
}
// Function Definitions


