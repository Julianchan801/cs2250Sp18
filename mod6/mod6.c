/*
 * =====================================================================================
 *
 *       Filename:  mod6.c
 *
 *    Description:  Learn how arrays work
 *
 *        Version:  1.0
 *        Created:  02/13/2018 08:44:57 AM
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
const int LEN = 20;

// Function Prototypes

// Main Function
int main()
{
    int ar[LEN];

    ar[0] = 33;
    ar[1] = 22;
    ar[2] = 66;
    ar[3] = 99;

    //Initialize the full array
    for(int i = 0; i < LEN; i++){

        if(i%3 == 0){
            ar[i] = i;
        }

        else{
            ar[i] = -99;
        }
        //Task initialize numbvers divisible by 3 to 0 else set to 99
    }
    
    //print the results
    for(int i =0; i <LEN; i++){
    printf("The %d value is %d\n", i+1, ar[i]);
    }



    return 0;
}
// Function Definitions


