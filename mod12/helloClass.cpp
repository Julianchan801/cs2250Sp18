/*
 * =====================================================================================
 *
 *       Filename:  helloClass.cpp
 *
 *    Description:  Hellow world class
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:11:57 AM
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

// Constants
class HelloNum
{

    //Onlyt the developer can see this section
    private:
        int number; // Attribute

        //The user has access here, writing Functions or Methods in C++
    public:
    void ShowNumber(); //prototype
    int  GetNumber(); //Getter
    void SetNumber(int n); //Setter
};

// Function Prototypes

// Main Function
int main()
{
    //An instance of the class HellowNum
    HelloNum n1;// this is also called an object
    n1.SetNumber(91);
    n1.ShowNumber();
    cout<<"Number is "<< n1.GetNumber()<<endl;

    return 0;
}
// Function Definitions

void HelloNum::ShowNumber(){
    cout << "Your num is " << number << endl;
    return;
}

int  HelloNum::GetNumber(){
    //Return private member
    return number;
}

void HelloNum::SetNumber(int n){
    //Set private member
    number = n;
    return;
}

