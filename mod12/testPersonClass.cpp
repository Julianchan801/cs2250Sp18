/*
 * =====================================================================================
 *
 *       Filename:  testPersonClass.cpp
 *
 *    Description:  test person class
 *
 *        Version:  1.0
 *        Created:  04/12/2018 08:43:21 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h>//For C
#include <iostream> // For C++
using namespace std; //For C++
#include "PersonClass.h"

// Constants

// Function Prototypes

// Main Function

int main()
{
//cin.ignore();
    Person p1;
    p1.ShowInfo();

    cout << "Your age is " << p1.GetAge()<< endl;
    cout << "Your Name is " << p1.GetName()<< endl;
    cout << "Your Name is " << p1.GetWeight()<< endl;
    
    p1.SetWeight(255.5);
    p1.SetName("Julian");
    p1.SetAge(32);


    //Task: Define an array of 4 persons and set their values to defaults
    //Display all the members of the array
    //
    Person persons[Size];
    for(int i =0; i < Size; i++)
    {
        cout << i << " ";
        << persons[i].ShowInfo();
        <<cout << endl;

    }


    return 0;
}

// Function Definitions


