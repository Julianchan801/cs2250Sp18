/*
 * =====================================================================================
 *
 *       Filename:  reversefor.c
 *
 *    Description:  Count down for loop
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:55:37 AM
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

    char name[] = "Waldo Weber";
    char Rname[] = "Waldo Weber";
    printf("Hi [%s] you are [%lu] byes long\n", name, sizeof(name) );
    for(int c = 0; c < sizeof(name); c++)
    {
        printf("[%c]\n", name[c] );
        Rname[c] = name[sizeof(name) -1 -c];
        printf("%s", Rname);
    }

        for(int i = 10; i > 0; i--)
        {
            printf("The value of i is %d\n", i);

        }

        return 0;
    }
// Function Definitions


