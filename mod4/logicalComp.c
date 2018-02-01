/*
 * =====================================================================================
 *
 *       Filename:  logicalComp.c
 *
 *    Description:  Logical comparison with grades
 *
 *        Version:  1.0
 *        Created:  02/01/2018 08:32:32 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h> // boolean variables

// Constants

// Function Prototypes

// Main Function
int main()
{
    //initialize variables
    int userGrade = 0;
    bool success = true;

    //Ask user for integer value
    printf("Enter your grade (0-100): \n");
    scanf("%d", &userGrade);

    //output grades with if else statement
    if( 89< userGrade && userGrade <= 100){
        printf("Your grade is A\n");
    }
    else if(80 <= userGrade && userGrade <= 89){
        printf("Your grade is B\n");
    }
    else if(70 <= userGrade && userGrade <= 79){
        printf("Your grade is C\n");
    }
    else{
        printf("Your grade is E\n");
       success = false;
    }

    if(success){
        printf("You passed!\n");
    }
    else{
        printf("You failed!");
    }

    return 0;
}
// Function Definitions


