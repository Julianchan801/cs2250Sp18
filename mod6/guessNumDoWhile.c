/*
 * =====================================================================================
 *
 *       Filename:  guessNum.c
 *
 *    Description:  Guessing game with a loop
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:29:09 AM
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
#include <time.h>
// Constants
const int LEN = 6; //Number of opportunities
const int NUM = 20; //Number between 0-NUM

// Function Prototypes

// Main Function
int main()
{
    //Initialize the array
    int guess[LEN];
    int Magic = -1;
    int opp   = 0;
    char answer = 'y';
    
    srand((int)time(0));
    //Task: when done, ask the question 
    //Do you want to play again:
    // 'y' for yes
    //  If Yes, repeat
    //  'n' for no
    //  ELSE quit, print "Bye bye"
    //  Anything else ask question again
    
    while(answer != 'n'){

        Magic = rand() % (NUM);

        while(opp < (LEN-1) ){

            printf("\n\nEnter a number between 0 and %d\n", NUM);
            scanf("%d", &guess[opp]);

            if(guess[opp] > 20 || guess[opp] < 0){
                continue; //repeat question
            }

            if(guess[opp] < Magic){
                printf("Enter a higher number\n\n");
            }
            else if(guess[opp] == Magic){
                printf("You have won!!!\n\n");
                break;
            }
            else {
                printf("Enter a lower number\n\n");
            }

            printf("Your %d guess is: %d\n\n", opp+1, guess[opp]);
            opp++;//increase

        }

        printf("Your guesses are:");
        for(int i = 0; i<= opp; i++){

            printf(" %d", guess[i]);
        }//END of the second while loop
        
        
        printf("Do you want to play again?\n");
        printf("\t'y'- Yes play again\n \t'n'- quit game\n");
        scanf(" %c", &answer);//Remember to take the enter key into consideration

        opp = 0; //reset values

    }//while loop: answer != 'n'
    
    printf("\n Thank you for playing!\n Bye bye!!\n ");

        //1) Create a random number between 0-20

        //2) Ask the user to enter a guess between 0-20. Capture the input in an array

        //3)If the number is less than the random number 
        //print fo higher. ELSE print lower

        //5) You have five chances to guess the correct number

        //6) Display all the choices you entered



    return 0;
}
// Function Definitions


