/*
 * =====================================================================================
 *
 *       Filename:  practice1.c
 *
 *    Description:  Pracrice random numbers and libraries
 *
 *        Version:  1.0
 *        Created:  02/28/2018 09:13:51 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Constants
const int SIZE = 5;
// Function Prototypes
void RGame(void);
void Hyp(double x, double y);
// Main Function
int main(void)
{
    RGame();// This is the random number game.
    
    double x;
    double y;
    printf("Enter the value of the adjacent\n");
    scanf(" %lf", &x);
    printf("Enter the value of the opposite\n");
    scanf(" %lf", &y);
    Hyp(x,y);


    char userWord[51];
    char keyWord[] = "safe";
    printf("Try to guess the keyword! Hint: it is four letters and starts with s.\n");
    scanf(" %s", userWord);
    if(strcmp(userWord,keyWord) == 0)
    {
        printf("You got it!\n");
    }
    else{
        printf("You did not get it and failed!!!\n");
    }

    double w[SIZE];
    
    for(int i = 0; i < SIZE; i++)
    {
        w[i] = i*i;
        printf("The %d value of w is %lf\n", i+1, w[i]);
    }


    return 0;
}
// Function Definitions

//Fun: Prints the value of the random number
//Input nothing
//output: the value of the random number
void RGame(void)
{
    char userInput;
    srand((int)time(0));
    do{
        int rNumber = rand() % 3;
        switch(rNumber){

            case 0:
                printf("We expect the value of rNumber to be 0. The true value of rNumber is [%d]\n", rNumber);
                break;
            case 1:
                printf("We expect the value of rNumber to be 1. The true value of rNumber is [%d]\n", rNumber);
                break;
            default: 
                printf("We expect the value of rNumber to be 2. The true value of rNumber is [%d]\n", rNumber);
                break;

        }//end of switch
        printf("Do you want to play again?\n\ty for Yes\n\tn for No\n");
        scanf(" %c", &userInput);

    }while(userInput != 'n');

}

//Func: Prints the value of the hypotenuse
//Input the lengths of the right triangle
//output: print the value of the hypotenuse
void Hyp(double x, double y)
{
    double z;
    z = sqrt(pow(x,2) + pow(y,2) );
    printf("The value of the hypotenuse is %lf\n", z);

    return;
}



