/*
 * =====================================================================================
 *
 *       Filename:  PersonClass.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:48:21 AM
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

// Function Prototypes

// Main Function
// Function Definitions

void Person::SetAge(int a){
age = a;
return;
}

int Person::GetAge(){
return age;
}

void Person::SetName(string n){
    name = n;
    return;
}

string Person::GetName(){
    return name;
}
        
void Person::SetWeight(double w){
    weight = w;
    return;
}

double Person::GetWeight(){
return weight;
}

void Person::ShowInfo() const
{
    //The "this" operator is an alias to
    //the object itself
    cout << "Your age is " << this->age << endl;
    cout << "Your Name is " << this->name << endl;
    cout << "Your Name is " << this->weight<< endl;
    return;
}

void Person::Person(int a, string n, double w)//second constructor
{
    age = a;
    name = n;
    weight = w;
    return;
}





