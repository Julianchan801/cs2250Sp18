/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  take two numbers (floats) from the user
 *                  Define the following functions.
 *                  1) TheSum: Returns the sum of the two functions
 *                  2) TheProd: Returns the product of the 2 numbers
 *
 *        Version:  1.0
 *        Created:  02/20/2018 09:31:54 AM
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
int TheSum(double x, double y);
double TheProd(double x, double y);
char Menu(void);

// Main Function
int main()
{
    //1) Get User input
    double x = 5.5;
    double y = 7.1;
    char input = 'k';

    while(input != 's' || input != 'p' || input != 'q')
    {
        input = Menu();
        
        switch(input)
        {
            case 's':
                //2) Call the Sum
                printf("The integer sum of %lf and %lf is %d\n", x,y,TheSum(x,y) );
                break;
            case 'p':
                //3) Call the Prod
                printf("The product of %lf and %lf is %lf\n", x,y,TheProd(x,y) );
                break;
            case 'q':
                break;
            default:
                printf("Invalid Choice\n");
        }//end of switch
//Write an if to exit while loop if something == q break;
        if(input == 'q'){
            break;
        }//Breaks out of program


    }//End of while

    return 0;
}
// Function Definitions

char Menu(void)
{
    char in = 'n';
    printf("What do you want to do?\n");
    printf("\t s) TheSum\n");
    printf("\t p) TheProd\n");
    printf("\t q) To quit!\n");
    scanf(" %c", &in);

    return in;
}

//Func: The sum- returns the integer sum of the two numbers
//Input: Two doubles
//output: Reurns the integer sum of the two doubles
int TheSum(double x, double y)
{

    return ((int) (x + y) );
}

//Func: TheProd
//Input: two doubles
//output: The product of the two numbers
double TheProd(double x, double y)
{
    return (x * y);
}

