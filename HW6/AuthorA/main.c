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
int GetNumOfNonWSCharacters(const char string[]);
int GetNumOfWords(const char string[]);
void FixCapitalization(char string[]);
void ReplaceExclamation(char string[]);
void ShortenSpace(char string[]); 

// Main Function
int main()
{
    int resultC;
    int resultW;
    char userText[sLength];
    char choice = 'y';
    //Get and print user input
    printf("Enter a sample text:\n");
    fgets(userText, sLength, stdin);
    printf("\nYou entered: %s", userText);
    

    while(choice != 'q')
    {
       choice = PrintMenu(choice);
        
       switch(choice)
       {
            case 'c':
                //Call the function
                resultC = GetNumOfNonWSCharacters(userText);
                printf("Number of non-whitespace characters: %d\n", resultC);
                break;
            case 'w':
                //Call the function
                resultW = GetNumOfWords(userText);
                printf("Number of words: %d\n", resultW);
                break;            
            case 'f':
                //Call the function
                FixCapitalization(userText);
                break;
            case 'r':
                //Call the function
                ReplaceExclamation(userText); 
                break;
            case 's':
                //Call the function
                ShortenSpace(userText); 
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
    printf("\nMENU\nc - Number of non-whitespace characters\nw - Number of words\nf - Fix capitalization\nr - Replace all !'s\ns - Shorten spaces\nq - Quit\n\nChoose an option:\n");
    scanf(" %c", &choice);
    return choice;
}

//Gives the number of non white space characters
int GetNumOfNonWSCharacters(const char string[]){
    int num = 0;
    for(int i = 0; i < strlen(string); i++)
    {
        if(string[i] != ' ' && string[i] !='\t')
        {
            num = num + 1;
        }//end of if statement

    }//end of for loop
    
    //printf("Number of non-whitespace characters: %d\n\n", num);
    return num - 1;
}//end of function

//Prints the number of words entered
    //GetNumOfWords
int GetNumOfWords(const char string[]){
    int w =0;
    int i =0;

    for(i = 0; i < strlen(string); i++)
    {
        if( (string[i] != ' ' && string[i] !='\t')  )
        {
            w = w + 1;
            while(string[i] != ' ' && string[i] != '\t')
            {
                i = i + 1;
            }//end of while
        }//end of if statement

    }//end of for loop
           // printf("Number of words: %d\n", w);
    return w;
}//end of function

//Function to eliminate double or more spaces
//Status = works
void ShortenSpace(char string[])
{

    //char userText[sLength];
    //char mString[GetNumOfNonWSCharacters( string ) + GetNumOfWords(string) ];
    char mString[strlen(string)+2];
    int i = 0;
    for(int j = 0; j < strlen(string); j++)
    {
        
        while( string[i] == ' ' && string[i+1] == ' ' )
        {
            i = i + 1;
        }//end of while
            mString[j] = string[i];
            i = i + 1;
    }//end of for

   // printf("\n");
    strcpy(string, mString);
    printf("Edited text: %s\n", string);
    printf("Edited text: %s\n", mString);

    return;
}//End of function

//Replaces the exclamation point in the sentences
void ReplaceExclamation(char string[])
{

    printf("Edited text: ");
    
    for(int i = 0; i <strlen(string); i++)
    {
        if(string[i] == '!')
        {
            //printf(".");
            string[i] = '.';

        }//end of if
       // else{
            //printf("%c", string[i]);
        //}//end of else
    }//end of for

    //printf("\n");
    printf("%s", string);
    return;
}//end of function

//Works!!!!!!
//Func: Fixes the capitalization of letters
void FixCapitalization(char string[])
{
   // printf("Edited text: ");
    //char dummy = toupper(string[0]);
    //printf("%c", dummy );
    string[0] = toupper(string[0]);
    for(int i = 1; i < strlen(string)-1; i++)
    {
        //printf("%c", string[i]);
        if(string[i] == '!' || string[i] =='.' || string[i] =='?')
        {
            while(string[i+1] == ' ' || string[i+1] == '\t')
            {
                //printf("%c", string[i+1]);
                i = i + 1;
            }//end of while
          //  char dummy = toupper(string[i+1]);
           //printf("%c", dummy );
           i = i + 1;
           string[i] = toupper(string[i]);
          // i = i + 1;

        }//end of if statement

    }//end of for loop
    
   // printf("%c", string[strlen(string)] );
    printf("Edited text: %s\n", string);
    return;
}

