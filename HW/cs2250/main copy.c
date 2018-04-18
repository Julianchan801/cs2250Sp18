/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Player Jersey and rankings
 *
 *        Version:  1.0
 *        Created:  02/11/2018 03:27:19 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Constants

// Function Prototypes

//Roster function
void Roster(int array[2][5]){
    printf("ROSTER\n");
    for(int i = 0; i < 5; i++){
    printf("Player %d -- Jersey number: %d, Rating: %d\n",i+1, 
            array[0][i], array[1][i]);
    }
    printf("\n");
}

int Location(int playerJ, int array[2][5]){

    int num;
    
    for(int i = 0; i < 5; i++){
        if(array[0][i] == playerJ){
            num = i;
        }//end of if
        else{
            num = -5;
        }//end of else

    }//end for
    return num;
}//end function

void OutputR(int array[2][5], int Rating){
    
    for(int i = 0; i < 5; i++){
        if(array[1][i] > Rating){
            printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1,
                    array[0][i], array[1][i] );
        }//end of IF
        
    }//END of for loop
    printf("\n");
}

//Menu function
/*void Menu( int array[2][3], char *userChoice[2] ){
    printf("MENU\nu - Update player rating\na - Output players above a rating\nr - Replace player\no - Output roster\nq - Quit\n\nChoose an option:\n");
    scanf("%s", *userChoice);
}*/

// Main Function
int main()
{
    //Array to store jersey number and ranking
    int info[2][5];
    int jNum;
    int newR;
    int above;
    int jNew;
    int jOld;
    int rNew;
    char userChoice[2] = "";

    for(int i = 0; i < 5; i++){
        printf("Enter player %d's jersey number:\n", i+1);
        scanf("%d", &(info[0][i]));
        printf("Enter player %d's rating:\n", i+1);
        scanf("%d", &(info[1][i]));
        printf("\n");
    }//end for loop 

    //Call the Roster function to print
    Roster(info);

    //Menu(info, &userChoice);
    //Call the Menu function to print the Menu
    // loop
    while(strcmp(userChoice, "q") != 0) {

        //Menue options printed below.i
        printf("MENU\nu - Update player rating\na - Output players above a rating\nr - Replace player\no - Output roster\nq - Quit\n\nChoose an option:\n");
        scanf("%s", userChoice);
        // printf("%s\n", userChoice);

        //OUTPUT Roster
        if (strcmp(userChoice, "o") == 0) {
            Roster(info);
        }

        //Output update player rating function
        else if (strcmp(userChoice, "u") == 0) {
            printf("Enter a jersey number:\n");
            scanf("%d", &jNum);
            printf("Enter a new rating for player:\n");
            scanf("%d", &newR);
            info[1][Location(jNum, info)] = newR;
            Roster(info);

        }

        //Output a players rating above a rating function
        else if (strcmp(userChoice, "a") == 0) {
            printf("Enter a rating\n");
            scanf("%d", &above);
            printf("ABOVE %d\n", above);
            OutputR(info, above);

        }

        //Replace player option/function
        else if (strcmp(userChoice, "r") == 0) {
            printf("Enter a jersey number:\n");
            scanf("%d", &jOld);
            if(Location(jOld, info) >= 0){
                printf("Enter a new jersey number:\n");
                scanf("%d", &jNew);
                printf("Enter a rating for the new player\n");
                scanf("%d", &rNew);
                info[0][Location(jOld, info)] = jNew;
                info[1][Location(jOld, info)] = rNew;
                Roster(info);

            }//end of if

        }//end of else if

    }//end of while

    return 0;
}
// Function Definitions


