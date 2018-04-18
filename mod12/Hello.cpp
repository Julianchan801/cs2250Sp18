/*
 * =====================================================================================
 *
 *       Filename:  Hello.cpp
 *
 *    Description:  Hellow world in C++
 *
 *        Version:  1.0
 *        Created:  04/10/2018 08:42:01 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h> for C
#include <iostream> //For C++
using namespace std; //For C++ standard name
// Constants

// Function Prototypes

// Main Function
int main()
{

    int age;
    string name;

   //std::cout << "Hellow world C++" << std::endl;
   cout << "Hellow world C++" << endl;
   cout << "How old are you?" << endl;
   cin  >> age;
   cout << "You are "  << age << " old" << endl;

   cout << "Hellow world C++" << endl;
   cout << "What is your name?" << endl;
   cin  >> name; //take input up to the first space
   //TODO: I need to take care of the enter key from previous cin calls
   //getline(cin, name); //take all input including spaces
   cout << "Hello "  << name << endl;

    return 0;
}
// Function Definitions


