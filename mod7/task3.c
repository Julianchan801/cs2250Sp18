/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  Update map positions: 
 *                  X-Coordinate
 *                  Y-Coordinate
 *
 *        Version:  1.0
 *        Created:  02/22/2018 09:17:07 AM
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
const int X = 0;
const int Y = 1;
const int DIM = 2;


// Function Prototypes
//1) Initialize your point to (0,0)
void InitPoint(int* xa, int* ya); //Pass by reference
//2) Display current Point position
void ShowPoint(int x, int y); // pass by value
//3) Move/update your point position
void MovePoint(int newx, int newy, int* xa, int* ya);// pass by reference
//pass x and y by value
//pass xa and ya by reference
//

// Main Function
int main()
{
    
    int x = -99;
    int y = -99;
    ShowPoint(x,y);

    InitPoint(&x,&y);
    ShowPoint(x,y);
    
    MovePoint(3,5,&x,&y);
    ShowPoint(x,y);

    // int point[DIM];


    return 0;
}
// Function Definitions

void ShowPoint(int x, int y)
{
    printf("X-Position -- [%d]\n", x);
    printf("Y-Position -- [%d]\n", y);
return;
}

//Initialize x and y to 0
void InitPoint(int* xa, int* ya)
{
    printf("Inside InitPoint\n");
    //To update the values at a given address
    //Use the de-reference operator "*"
    ShowPoint(*xa, *ya);//Values of xa and ya
    *xa = 0;
    *ya = 0;
    ShowPoint(*xa, *ya);
    printf("End InitPoint\n");
    return;
}


void MovePoint(int newx, int newy, int* xa, int* ya)
{
    *xa = newx;
    *ya = newy;
    return;
}

