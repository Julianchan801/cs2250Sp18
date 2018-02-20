/*
 * =====================================================================================
 *
 *       Filename:  HelloFunc.c
 *
 *    Description:  Learn to use functions
 *
 *        Version:  1.0
 *        Created:  02/20/2018 08:41:06 AM
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
void Hello(void);
void HelloMany(int num);
int HelloNum(void);
int HelloNumMany(int num);
int MySquare(int n);

// Main Function
int main()
{

    Hello();
    Hello();
    HelloMany(3);
    int n = HelloNum();
    printf("I got %d from HelloNum()\n",n);
    n = HelloNumMany(5);
    printf("I got %d from HelloNumMany()\n",n);

    int s = MySquare(5);
    printf("I entered 5 and got %d from MySquare\n",s);


    return 0;
}
// Function Definitions
//Func: My Square
//Takes an integer
//Returns the square of the integer
int MySquare(int n)
{
    int Square = n * n;
    return Square;
}

//Func: HelloNumMany
//Takes an integer
//Returns  The sum of Hello print statements
int HelloNumMany(int num)
{
    int count = 0;
    for(int i = 0; i < num; i++)
    {
        printf("%d) Hello NumMany\n", i + 1);
        count ++;
    }

    return count;
}

//Func: HelloNum returns the number 99
int HelloNum()
{
    int num = 99;
    return num;
}

//Prints message
void Hello(void)
{

    printf("Hello Ogden World\n");
    return;
}

//Func: HelloMany
//Prints Message num times
void HelloMany(int num)
{
    for(int i = 0; i < num; i++)
    {
        printf("Weber State Great, Great, Great!\n");
    }
    return;
}




