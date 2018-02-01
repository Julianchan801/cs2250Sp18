/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  1st, 2nd, 3rd places
 *
 *        Version:  1.0
 *        Created:  01/30/2018 09:30:28 AM
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

    int pos = 0;
    printf("What is your position?\n");
    scanf("%d", &pos);
    //1) pos = 1 is gold metal
    if(pos == 1)
    {
        printf("You are the best ... you won GOLD\n");
    }
    //2) pos = 2 is silver medal
    else if(pos == 2)
    {
        printf("You are second best ... you won SILVER\n");
    }
        //3) pos = 3 is bronze medal
    else if(pos == 3)
    {
        printf("You barely won a medal ... you won BRONZE\n");
    }
    //4) Else no medal
    //if(pos != (1 || 2 || 3) )
    else 
    {
        printf("You need to train more ... you did not win any medals. SAD!!!\n");
    }

    return 0;
}
// Function Definitions


