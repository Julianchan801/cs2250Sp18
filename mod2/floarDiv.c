/*
 * =====================================================================================
 *
 *       Filename:  floarDiv.c
 *
 *    Description:  Learn about float and division
 *
 *        Version:  1.0
 *        Created:  01/18/2018 09:24:06 AM
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

// Function Prototypes

// Main Function
int main()
{
    int age = 25;
    int grade = 3;
    double result;
    int iresult;
    //We need to cast the int to doubles
    result = (double)age/(double)grade;
    printf("result = %lf\n", result);
    iresult = (double)age/(double)grade;
    printf("result = %d\n", iresult);


    return 0;
}
// Function Definitions


