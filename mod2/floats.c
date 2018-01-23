/*
 * =====================================================================================
 *
 *       Filename:  floats.c
 *
 *    Description: Learning about floating points
 *
 *        Version:  1.0
 *        Created:  01/18/2018 08:53:36 AM
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
const double GRAVITY = 9.8; // m/s
const double LB_TO_KG = 0.453592;
// Function Prototypes

// Main Function
int main()
{
    
    double weight = 2.4;
    printf("Enter your weight in pounds\n");
    scanf("%lf", &weight);
    printf("Your weight in KG is %lf\n", weight * LB_TO_KG );
    printf("Your real weight is %lf\n", weight * LB_TO_KG * GRAVITY);

    return 0;
}
// Function Definitions


