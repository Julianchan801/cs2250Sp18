/*
 * =====================================================================================
 *
 *       Filename:  chars.c
 *
 *    Description:  Practice characters
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:51:17 AM
 *       Revision:  none
 *       Compiler:  gcc chars.c -o chars -lm
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

    char input, dummy;
    int age;

    printf("Do you like to code?:\n");
    scanf("%c", &input);
    printf("1) You entered [%c]\n", input);
    
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Your age is: [%d]\n", age);

    printf("Do you really like to code?:\n");
    scanf("%c %c", &dummy, &input);
    printf("2) You entered [%c]\n", input);
    printf("3) You entered [%c]\n", input);




    return 0;
}
// Function Definitions


