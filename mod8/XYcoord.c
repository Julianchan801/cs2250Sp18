/*
 * =====================================================================================
 *
 *       Filename:  XYcoord.c
 *
 *    Description:  Functions for XY coordinates and array test
 *
 *        Version:  1.0
 *        Created:  03/15/2018 08:50:13 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "XYcoord.h"

// Constants

// Function Prototypes

// Function Definitions


// Function Definitions
// 1) Initialize your Point to (0, 0)
void InitPoint(int* xa, int* ya)
{
    printf("Beg InitPoint\n");
    // To update the values at a given address
    // use the de-reference operator "*"
    ShowPoint(*xa, *ya); // values of xa and ya
    // Update the values
    *xa = 0;
    *ya = 0;
    ShowPoint(*xa, *ya);
    printf("End InitPoint\n");
    return;
}
// 2) Display current Point position
void ShowPoint(int x, int y)
{
    printf("X-Position = [%d]\n", x);
    printf("Y-Position = [%d]\n", y);
    return;
}
// 3) Move/Update your Point position
//  pass newx and newy by value
//  pass xa and ya by reference
void MovePoint(int newx, int newy, int* xa, int* ya) 
{
    *xa = newx;
    *ya = newy;
    return;
}

// Update Point. You ask user to enter new values
void UpdatePoint(int* xa, int* ya)
{
    printf("Enter your x-coordinate:");
    // When using an address/pointer, do not use
    // the Address "&" operator
    scanf("%d",xa);
    printf("Enter your y-coordinate:");
    scanf("%d",ya);
    return;
}

