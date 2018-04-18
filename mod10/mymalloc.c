/*
 * =====================================================================================
 *
 *       Filename:  mymalloc.c
 *
 *    Description:  Dynamically allocated memory
 *
 *        Version:  1.0
 *        Created:  03/29/2018 08:41:18 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants
//Vector makes sure there is a continuous block of memory. A vector is an array
//with special properties. 
//Linked list is a list of values and an address
//Structure node
//use a while loop over Null to keep itterating over the pointers
// Function Prototypes

// Main Function
int main()
{
    int num;
    int* sa = NULL;
    printf("How many numbers do you need?\n");
    scanf("%d", &num);
    //Malloc(<bytes>)
    printf("int is [%lu] bytes\n", sizeof(int));
    printf("int array of [%d] is [%lu] bytes\n",num, num * sizeof(int));

    //malloc(<bytes>)
    sa = (int*) malloc(num * sizeof(int));
    for(int i = 0; i < num; i++)
    {
        sa[i] = i + 10;
    }
    
    for(int i = 0; i < num; i++)
    {
        printf("%d element is [%d]\n", i, sa[i]);
    }

    free(sa);

    return 0;
}
// Function Definitions


