/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Authoring assistant
 *
 *        Version:  1.0
 *        Created:  03/10/2018 07:22:10 AM
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
#include <ctype.h>

// Constants
const int sLength = 900;
// Function Prototypes
char PrintMenu(char choice);
void GetNumOfNonWSCharacters(char string[]);
int GetNumOfWords(char string[]);
void FixCapitalization(char string[]);
void ReplaceExclamation(char string[]);
void ShortenSpace(char string[]); 

// Main Function
int main()
{
    char userText[sLength];
    char choice = 'y';
    //Get and print user input
    printf("Enter a sample text:\n");
    fgets(userText, sLength, stdin);
    printf("\nYou entered: %s\n", userText);
    

    while(choice != 'q')
    {
       choice = PrintMenu(choice);
        
       switch(choice)
       {
            case 'c':
                //Call the function
                GetNumOfNonWSCharacters(userText);
                break;
            case 'w':
                //Call the function
                printf("Number of words: %d\n", GetNumOfWords(userText));
                break;            
            case 'f':
                //Call the function
                //FixCapitalization(userText);
                break;
            case 'r':
                //Call the function
                ReplaceExclamation(userText); 
                break;
            case 's':
                //Call the function
                // ShortenSpace() 
                break;
            case 'q':
                //exit the loop
                break;
            default:
                printf("Invalid choice\n");

       }


        //If the user enters quit
        if(choice == 'q'){
            break;
        }


    }

    return 0;
}
// Function Definitions

//Function Menu
char PrintMenu(char choice)
{
    printf("MENU\nc - Number of non-whitespace characters\nw - Number of words\nf - Fix capitalization\nr - Replace all !'s\ns - Shorten spaces\nq - Quit\n\nChoose an option:\n");
    scanf(" %c", &choice);
    return choice;
}

//Gives the number of non white space characters
void GetNumOfNonWSCharacters(char string[]){
    int num = 0;
    for(int i = 0; i < strlen(string)-1; i++)
    {
        if(string[i] != ' ' && string[i] !='\t')
        {
            num = num + 1;
        }//end of if statement

    }//end of for loop
    
    printf("Number of non-whitespace characters: %d\n", num);
    return;
}//end of function

//Prints the number of words entered
int GetNumOfWords(char string[]){
    int num1 = 0;

    ////Works the first time but not later!!
    //
    for(int i = 0; i < strlen(string)-1; i++)
    {
        if( (string[i] = ' ' || string[i] !='\t') && ( isalpha(string[i+1]) == 0 ) )
        {
            num1 = num1 + 1;
        }//end of if statement

    }//end of for loop

   // if(isalpha(string[0] == 0) )
    //{
     //   num = num + 1;
    //    }
    
   // printf("Number of words: %d\n", num1);


    return num1;
}//end of function

void ShortenSpace(char string[])
{

    for(int i = 0; i < strlen(string); ++i)
    {
        if( string[i] == ' ' && string[i+1] == ' ')
        {
            string[i] = string[i+1];//Use ctype and print statement

        }//end of if
    }//end of for
    return;
}

//Replaces the exclamation point in the sentences
void ReplaceExclamation(char string[])
{
    char newString[strlen(string+1)];

    for(int i = 0; i <strlen(string); ++i)
    {
        newString[i] = string[i];
            
        if(string[i] == '!')
        {
            newString[i] = '.';//Don't modify the original string

        }//end of if
    }//end of for

    printf("Edited text: %s\n", newString);
    return;
}

//NEED TO FINISH THIS!!!!!
//Func: Fixes the capitalization of letters
void FixCapitalization(char string[])
{
    for(int i = 0; i < strlen(string)-1; i++)
    {
       // int flag = 0; // 0 indicates true 1 false
        if(string[i] == '!' || string[i] =='.' || string[i] =='?')
        {
            ;
           /* int j = i + 1;
            for( j >  i; j < strlen(string); j++)
            {
                if(string[j-1] == ' ' && isalpha(string[j]) == 0 )
                {
                   string[j] = toupper(string[j]);
                   break;
                }
            }//end of j for loop */

        }//end of if statement

    }//end of for loop

    printf("\nEdited text: %s\n", string);
    return;
}

