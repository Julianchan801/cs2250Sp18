/*
 * =====================================================================================
 *
 *       Filename:  hwch3_p2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/01/2018 10:03:29 AM
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

    char oil[11];
    intoilValue = 35;
    char tire[] = "Tire Rotation";
    int tireValue = 19;
    char first[31];
    char second[31];

    printf("Davy's auto shop services\n Oil change -- $35\n Tire rotation -- $19\n Car wash -- $7\n Car wax -- $12\n");
    
    printf("Select first service:\n");
    scanf("%s", first);
    
    printf("Select second service:\n");
    scanf("%s", second);

    
    strcpy(oil, "Oil Change");
    printf("[%s] $%d\n", oil, oilValue);



    return 0;
}
// Function Definitions


