/*
 * =====================================================================================
 *
 *       Filename:  while.c
 *
 *    Description:  practice while loops
 *
 *        Version:  1.0
 *        Created:  02/06/2018 08:50:49 AM
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
const int low = 1;
const int max = 20;
// Function Prototypes

// Main Function
int main()
{
    int num = 0;
    unsigned int fact = 0;

    printf("Please enter a number from %d-%d\n", low, max);
    printf("And I will give you the factorial\n");
    scanf("%d", &num);
    if(num >= low && num <= max)
    {
        fact = num;
        printf("Calculating Factorial\n");
        while(num > 0)
        {
            printf("Num = [%d], fact [%u]\n", num, fact);
            num = num - 1;
            fact = fact * num;
                
        }//end of while loop


    }//end of if loop
    else
    {
        printf("You did not folllow the instructions\n");
    }
    
    printf("Done\n");

    return 0;
}
// Function Definitions


