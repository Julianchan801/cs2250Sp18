/*
 * =====================================================================================
 *
 *       Filename:  superbowl.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/06/2018 08:29:33 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
// Constants

// Function Prototypes

// Main Function
int main()
{

    char qbfn[50] = "";
    char qbln[50] = ""; //empty string initialized to a variable

    printf("Select a QB, ");
    printf("and I'll tell you number of Super bowl wins: \n");
    printf("Tom Brady\n");
    printf("Peyton Manning\n");
    printf("Eli Mannning\n");
    printf("None\n");
    //Take input

    scanf("%s", qbfn); // Requires 1 input
    if(strcmp(qbfn, "None") == 0)
    {
            printf("No Super Bowls\n");
    }
    else
    {
        scanf("%s", qbln);
        printf("Hi %s %s\n", qbfn, qbln);
    }
    

            

    return 0;
}
// Function Definitions


