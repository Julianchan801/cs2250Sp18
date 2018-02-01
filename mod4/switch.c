/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  test switch statements.
 *    Note: only works on integers, single char.
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
    switch(pos)
    {
        case 1:     //if (pos == 1)
            printf("You won %d place.\n", pos);
            break;
        case 2:     //if (pos == 2)
            printf("You won %d place.\n", pos);
            break;
        case 3:     //if (pos == 3)
            printf("You won %d place.\n", pos);
            break;
        case 28:     //if (pos == 28)
        case 14:     //if (pos == 14)
            printf("You won a plastic metal.\n");
            break;
        default:    //else    
            printf("You won %d place. Sorry no metals.\n", pos);
    }
    
    printf("Adios amigo!\n");
    return 0;
}
// Function Definitions


