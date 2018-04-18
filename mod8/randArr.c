/*
 * =====================================================================================
 *
 *       Filename:  randArr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/15/2018 09:17:59 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "randArr.h"
#include <stdlib.h>
#include <time.h>
// Constants


// Function Definitions
void InitRandArray(int superAr[])
{
    srand( (int)(time(0))); //set the seed
    for(int i = 0; i < ASIZE; i++)
    {
        superAr[i] = ( rand() % 101 );
    }

    return;
}


void ShowRandArray(int superAr[])
{

    for(int i = 0; i < ASIZE; i++)
    {
        printf("The %2d value is [%04d] \n", i+1,superAr[i]);
    }
    
    return;
}


