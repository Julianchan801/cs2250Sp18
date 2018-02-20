/*
 * =====================================================================================
 *
 *       Filename:  task4.c
 *
 *    Description:  print the first twenty numbers
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:08:56 AM
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

    int num = 0;
    int counter = 0;
    while(1)
    {
        
        //print even numbers 
        if( (num % 2) == 0)
        {
            printf("Even number [%d]\n", num);
        }
        //skip odd numbers
        //when 20 even numbers break loops
        else{
            printf("\tSkip odd number [%d]\n", num);
            num++;
            continue;
        }
        num++;
        counter++;
        if(counter == 20)
        {
            break;//leave loop
        }

    }//end of while loop

    return 0;
}
// Function Definitions


