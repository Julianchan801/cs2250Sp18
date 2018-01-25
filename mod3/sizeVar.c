/*
 * =====================================================================================
 *
 *       Filename:  sizeVar.c
 *
 *    Description:  Check variable size in bytes
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:00:01 AM
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
    int num = 1;
    unsigned int unum = 1;
    num = num * 10000;
    unum = unum * 10000;
    printf("The size of int is [%d]\n", sizeof(num));
    printf("The size of uint is [%d]\n", sizeof(unum));
    printf("num = [%d]\n", num);
    printf("unum = [%d]\n", unum);
    num *= 10000; //compound operators
    unum *= 10000; //compound operators
    printf("num = [%d]\n, unum = [%d]\n", num,unum);
    num *= 100; //compound operators
    unum *= 100; //compound operators
    printf("num = [%d]\n, unum = [%d]\n", num,unum);
    //What is the rang eof an int?
    //2^32 ~ 4294000000 = i combinations
    // Range: -(i/2) to + (i/2 -1)
    
    return 0;
}
// Function Definitions


