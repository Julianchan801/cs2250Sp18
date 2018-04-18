/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  HW 4 problem 16.9.1 Half arrow
 *
 *        Version:  1.0
 *        Created:  01/25/2018 10:29:33 PM
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
int main(void){

    //Define variables for loops and user input.
    int i = 0;
    int j = 0;
    int k = 0;
    int t = 0;
    int arrowBaseHeight = 0;
    int arrowBaseWidth  = 0;
    int arrowHeadWidth  = 0;

    // Get user input for arrow dimensions
    printf("Enter arrow base height:\n");
    scanf("%d", &arrowBaseHeight);
    printf("Enter arrow base width:\n");
    scanf("%d", &arrowBaseWidth);
    //User can only enter arrowHeadWidth > arrowBaseWidth
    while(arrowHeadWidth <= arrowBaseWidth){
    printf("Enter arrow head width:\n");
    scanf("%d", &arrowHeadWidth);
    }//end of while statement


    //print a new line
    printf("\n");
    //For loops to draw the arrows.
    //We first draw the arrow base with the two loops below.
     for(t=0; t < arrowBaseHeight; ++t){
        for(k=0; k < arrowBaseWidth; ++k){
            printf("*");
        }
        printf("\n");
    }//End nested for loop

    //Draw the arrow head with the for loops.


    for(i=0; i < arrowHeadWidth; ++i){
        for(j=0; j < arrowHeadWidth - i; ++j){
            printf("*");
        }
        printf("\n");
    }//End nested for loop

    return 0;
}
// Function Definitions


