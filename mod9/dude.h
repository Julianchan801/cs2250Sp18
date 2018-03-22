/*
 * =====================================================================================
 *
 *       Filename:  dude.h
 *
 *    Description:  Dude information
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:20:05 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  DUDE__INC__
#define  DUDE_INC__
//    <+DETAILED+>

struct Dude
{
    int age;
    double weight;

};//Need the semicolon since this is a statement

//typedef is a nickname or allias
typedef struct SuperDude
{
    int age;
    double weight;
    char sex;

}SuperDude;//Need the semicolon since this is a statement

//Constants
//#define ASIZE 3
static const int ASIZE = 3;

// Function Prototypes

void ShowInfo( int age, double weight );
//Pass a const address instread of the value
//Makes the address constant
//It is READ only. You cannot modify the value.
void ShowInfoStruct( const SuperDude* sd );
void InitInfoStruct( SuperDude* sd);// Address of SuperDude tyoe

SuperDude CopyInfoStruct(const SuperDude* sd);
void UpdateInfoStruct(SuperDude* sd, int myweight);
void ShowInfoAllStruct( const SuperDude sd[] );

#endif /* ----- #ifndef DUDE__INC__ ----- */

