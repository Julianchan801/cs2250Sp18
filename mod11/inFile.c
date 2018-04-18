/*
 * =====================================================================================
 *
 *       Filename:  inFile.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/03/2018 09:17:48 AM
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
#define NUM 4
//Identical to const int NUM = 4;


// Function Prototypes

// Main Function
int main()
{
    //int data[NUM]; // Static allocation
    int* userNums; //User numbers; Dynamic memory
    int arrSize = 0;//User specified number of integers


    FILE* inFile = NULL;
    printf("Opening file data.txt\n");

    //Open file for Reading purposes
    inFile = fopen("data.txt", "r");
    //Test for success
    if(inFile == NULL)
    {
        printf("Could not open file\n");
        return -1;
    }

    //Scan file
    fscanf(inFile, "%d", &arrSize);
    printf("arrSize[%d]\n", arrSize);

    userNums = (int*)malloc(sizeof(int)*arrSize);
    //Check you got the memory
    if(userNums == NULL)
    {
        printf("Unable to malloc mem\n");
        fclose(inFile);
        return -2;
    }

    //arrSize is the first member of the file, which in this case is
    //the HEADER record or the number of records in the file.
    int i = 1; //Skip the header record
    while(i <= arrSize)
    {
        //i - 1 so that you skip the header record, but allocate your info
        //starting at index 0
        fscanf(inFile, "%d", &(userNums[i-1]) );
    }
    //Print records
    i = 0;
    while(i < arrSize)
    {
        printf("Numbers [%d]\n", userNums[i] );
    }

    fclose(inFile);
    free(userNums);
    return 0;
}
// Function Definitions


