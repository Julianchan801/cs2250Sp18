/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Calculate BMI
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:29:15 AM
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
// Constants

// Function Prototypes

// Main Function
int main()
{
    double userWeight = 2;
    double userHeight = 1; 
    double userBMI    = 0;

    // 1) Capture the weight in KG
    printf("Enter your weight in KG\n");
    scanf("%lf", &userWeight);
    // 2) Capture the height in meters
    printf("Enter your height in meters\n");
    scanf("%lf", &userHeight);
    // 3) Calculate your BMI = weight/height**2
    userBMI = userWeight / (pow(userHeight,2)) ;
    printf("Your BMI is: %lf\n", userBMI);

    return 0;
}
// Function Definitions


