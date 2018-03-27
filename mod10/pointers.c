/*
 * =====================================================================================
 *
 *       Filename:  pointers.c
 *
 *    Description:  Quick review of pointers
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:42:57 AM
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

// Function Prototypes

// Main Function
int main()
{

    //int i = 7;
    int* pi = NULL; //address of an integer pointer
    //ALways initialize to null
    //pi = &i;
    //printf("i[%d] value that points to pi[%d] \n", i, *pi);
    int i;
   // int pa[2]; //Statically allocated
    //Use malloc: takes one argument Number of bytes
    //malloc(bytes)
    //... when you are done
    //free memory or address, pointer
    //TO get number of bytes  of a type use: sizeof(type)
    // type* pointer = (type*)malloc(sizeof(type))
    //
    // Pointer to an array of integers
    printf("Enter number of elements: \n");
    scanf("%i",&i);
    pi = (int*) malloc( i*sizeof(int) );
    //Define array with input
    //int ar[i];
    //for(int j = 0; j < i; j++)
    //{
    //    printf("ar[%d] = %d \n", j, ar[j]);
    //}

    //printf("The value of the array is [%d] and the address is [%d]\n", *pi, *pi);

    free(pi);



    return 0;
}
// Function Definitions


