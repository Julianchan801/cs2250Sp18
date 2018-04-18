/*
 * =====================================================================================
 *
 *       Filename:  testPersonClass.cpp
 *
 *    Description:  Test Person Class
 *
 *        Version:  1.0
 *        Created:  04/12/2018 08:43:21 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h>  // For C
#include <iostream>  // For C++
using namespace std; // For C++
#include "PersonClass.h"

// Constants
// Function Prototypes
// Main Function
// Main Function
int main()
{
    /*
    Person p1; // Before Constructor
    p1.SetAge(21);
    p1.SetName("Waldo");
    p1.SetWeight(185.2);
    cout<<"Name "<< p1.GetName() << endl;
    cout<<"Age "<< p1.GetAge() << endl;
    cout<<"Weight "<< p1.GetWeight() << endl;
    */
    Person p2; // Default Constructor
    p2.ShowInfo();
    
    Person p3(4, "Waldo", 33.2); // Values Constructor
    p3.ShowInfo();
    
    Person p4(66,"Mario", 2.0); // Values Constructor
    p4.ShowInfo();
    // Task: Define an array of 4 Persons and set their values to defaults
    // Display all the members of the array
    int Size = 4;
    Person persons[Size];
    for(int i = 0; i < Size; i++)
    {
        cout << i << " ";
        persons[i].ShowInfo();
        cout<< endl;
    }




    return 0;
}

// Function Definitions


