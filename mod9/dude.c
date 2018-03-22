/*
 * =====================================================================================
 *
 *       Filename:  dude.c
 *
 *    Description:  Dude function definitions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:20:30 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "dude.h"

// Constants

// Function Prototypes

// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfo
 *  Description:  Display age
 * =====================================================================================
 */
void ShowInfo( int age , double weight)
{
    printf("Your age is [%d]\n", age);
    printf("Your weight is [%.2lf]\n", weight);
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfoStruct
 *  Description:  Displays SuperDude information
 * =====================================================================================
 */
void ShowInfoStruct(const SuperDude* sd )
{
    printf("Your age is [%d]\n", sd->age);
    printf("Your weight is [%.2lf]\n", (*sd).weight);
    printf("Your sex is [%c]\n", sd->sex);
    return;
}



void InitInfoStruct( SuperDude* sd)
{
    //When using an address of a structure use the -> operator to
    //access the struct members instead of the . operator
    //which is used when you have the structure
    //instead of the address
    sd->age = -990;
    sd->weight = -99;
    (*sd).sex = 'N';//An alternative way of updating the values the address points to.
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CopyInfoStruct
 *  Description:  Make a copy of a SuperDude structure and return it
 * =====================================================================================
 */
SuperDude CopyInfoStruct(const SuperDude* sd)
{
    SuperDude tmp;
    //tmp. because tmp IS a structure
    //sd-> because sd IS an address
    tmp.age = sd->age;
    tmp.weight = sd->weight;
    tmp.sex = sd->sex;

    return tmp;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  UpdateInfoStructure
 *  Description:  Update values (int, doubles) from struct by some weight
 * =====================================================================================
 */
void UpdateInfoStruct(SuperDude* sd, int myweight)
{
    sd->age *= myweight;
    sd->weight = sd->weight * myweight;

    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfoAllStructure
 *  Description:  Display array of structures
 * =====================================================================================
 */
void ShowInfoAllStruct( const SuperDude sd[] )
{

    for(int i = 0; i < ASIZE; i++)
    {
        printf("[%d] Member info [%d] [%lf] [%c]\n", i, sd[i].age, sd[i].weight, sd[i].sex);
    }

    return;
}



