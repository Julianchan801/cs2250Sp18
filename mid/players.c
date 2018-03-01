/*
 * =====================================================================================
 *
 *       Filename:  players.c
 *
 *    Description:  Soccer player roster
 *
 *        Version:  1.0
 *        Created:  02/27/2018 07:57:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
const int NUM_PLAYERS = 5;

// Function Prototypes
void InitPlayers(int jerseyNums[], int ratingNums[]);
void ShowPlayers( int jerseyNums[], int ratingNums[]);
char ShowMenu(void);
void UpdatePlayers( int jerseyNums[], int ratingNums[]);
void AboveRating(int jerseyNums[], int ratingNums[]);
void Replace(int jerseyNums[], int ratingNums[]);
// Main Function
int main(void) 
{
    int jerseyNums[NUM_PLAYERS];
    int ratingNums[NUM_PLAYERS];
    //int i = 0;
    //int j = 0;
    //int playerJersy = 0;
    //int playerRating = 0;
    char menuOp = '-';


    InitPlayers(jerseyNums, ratingNums);

    ShowPlayers(jerseyNums, ratingNums);


    // Menu
    do {
        //Show Menu
        menuOp = ShowMenu();

        //Update
        if (menuOp == 'u') 
        {

            UpdatePlayers( jerseyNums, ratingNums);

        }

        // Output players above a user defined rating
        else if (menuOp == 'a') 
        {

            AboveRating( jerseyNums, ratingNums);
        }//End of else if for 'a'

        // Replace
        else if (menuOp == 'r') 
        {

            Replace( jerseyNums, ratingNums);
        }//End of if else statement

        // Output roster
        else if (menuOp == 'o') 
        {
            ShowPlayers(jerseyNums, ratingNums);
        }
    } while(menuOp != 'q');

    return 0;
}

// Function Definitions

//FUNC: 
//input: jersey numbers and player ratings
//Return: Void
void InitPlayers(int jerseyNums[], int ratingNums[])
{
    int i = 0;
    // Get user defined jersey numbers and ratings
    for (i = 0; i < NUM_PLAYERS; ++i) 
    {
        printf("Enter player %d's jersey number:\n", (i + 1));
        scanf("%d", &(jerseyNums[i]));

        printf("Enter player %d's rating:\n", (i + 1));
        scanf("%d", &(ratingNums[i]));
        printf("\n");
    }
    return;
}

//Func: Print the roster
//Input Void
//Output the roster
void ShowPlayers(int jerseyNums[], int ratingNums[])
{
    int i = 0;
    // Print roster
    printf("ROSTER\n");
    for (i = 0; i < NUM_PLAYERS; ++i) 
    {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", (i + 1), jerseyNums[i], ratingNums[i]);
    }
    return;
}

//Display Menu
//Return user choice.
char ShowMenu(void)
{
    char menuOp;

    printf("\nMENU\n");
    printf("u - Update player rating\n");
    printf("a - Output players above a rating\n");
    printf("r - Replace player\n");
    printf("o - Output roster\n");
    printf("q - Quit\n");

    printf("\nChoose an option:\n");
    scanf(" %c", &menuOp);

    return menuOp;
}

//Update Player rating

void UpdatePlayers( int jerseyNums[], int ratingNums[])
{
    int i = 0;
    int playerJersy;
    int playerRating;
    printf("Enter a jersey number:\n");
    scanf("%d", &playerJersy);

    printf("Enter a new rating for player:\n");
    scanf("%d", &playerRating);

    for (i = 0; i < NUM_PLAYERS; ++i) 
    {
        if (jerseyNums[i] == playerJersy) 
        {
            ratingNums[i] = playerRating;
        }
    }

    return;
}


//Func: Outputs players rating above a rating
//Input: Void
//Output void
void AboveRating(int jerseyNums[], int ratingNums[])
{
    int playerRating;
    printf("Enter a rating:\n");
    scanf("%d", &playerRating);

    printf("\nABOVE %d\n", playerRating);
    for (int i = 0; i < NUM_PLAYERS; ++i) 
    {
        if (ratingNums[i] > playerRating) 
        {
            printf("Player %d -- Jersey number: %d, Rating: %d\n", (i + 1), jerseyNums[i], ratingNums[i]);
        }
    }

    return;
}

//Func: Replace a jersey number and rating
//Input jersey number and ratin
//output void
void Replace(int jerseyNums[], int ratingNums[])
{
    int playerJersy;
    int playerRating;
    printf("Enter a jersey number:\n");
    scanf("%d", &playerJersy);


    int j = -1;  // Default index for player replacement
    for (int i = 0; i < NUM_PLAYERS; ++i) 
    {
        if (playerJersy == jerseyNums[i]) 
        {
            j = i;
        }
    }

    // Replace player only if the player is in the roster
    if (j != -1) 
    {
        printf("Enter a new jersey number:\n");
        scanf("%d", &playerJersy);

        printf("Enter a rating for the new player:\n");
        scanf("%d", &playerRating);

        jerseyNums[j] = playerJersy;
        ratingNums[j] = playerRating;
    }
    return;
}


