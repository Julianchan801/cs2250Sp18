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
 *        Created:  02/22/2018 09:17:01 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Vale (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "XYcoord.h"
// Main Function
int main()
{
    //int point[DIM]; 
    int x = -99;
    int y = -99;
    ShowPoint(x, y);
    InitPoint(&x, &y);
    ShowPoint(x, y);
    /*MovePoint(3, 5, &x, &y);
    ShowPoint(x, y);
    UpdatePoint(&x, &y);
    ShowPoint(x, y); */

    return 0;
}
