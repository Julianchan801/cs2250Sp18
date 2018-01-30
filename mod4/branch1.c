/*
 * =====================================================================================
 *
 *       Filename:  branch1.c
 *
 *    Description:  Basics of branching
 *
 *        Version:  1.0
 *        Created:  01/30/2018 08:51:49 AM
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
    int age = 0;
    int temp = 0;
    printf("Enter your age:\n");
    scanf("%d", &age);
    
    printf("Your are %d years old.\n", age);

    if(age >= 18)  //IF True, go inside the block
    {
        printf("You can vote!\n");
    }
    else //Do not use a ( ). Default case or FALSE case
    {
        temp = 18 - age;
        printf("You have %d years to vote\n", temp);
    }
    if(age >= 21)
    {
        printf("You can also drink and buy cigarettes!\n");
    }
    else
    {
        temp = 21 - age;
        printf("You have %d years to drink and smoke!\n", temp);
    }
    
    if(age == 35)
    {
        printf("This is prime time\n");
    }
    if(age < 35)
    {
        printf("You have %d years until prime time!\n", (35-age));
    }
    else
    {

    {
        printf("You have %d years until prime time!\n", (35-age));
    }
    }

    if(age >= 65)
    {
        printf("You should retire now!\n");
    }
    else
    {
        temp = 65 - age;
        printf("You have %d years to retire! That is a lot of years to count! SAD!!! BUT you can smoke and drink for some of those years.\n", temp);
    }

    printf("Adios amigo\n");


    return 0;
}
// Function Definitions


