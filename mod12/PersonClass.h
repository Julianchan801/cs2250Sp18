/*
 * =====================================================================================
 *
 *       Filename:  PersonClass.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2018 08:42:06 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  PERSONCLASS__INC__
#define  PERSONCLASS_INC__

//Constructor
Person::Person() const
{
    //Initialize more or all of your variables or attributes
    age = 0;
    name = "None";
    weight = 0.0;
    return;
}

class Person
{

    private:
        int age;
        string name;
        double weight;
    public:
        //Constructor
        Person();//Default constructor
        //TODO: set parameters as optional
        //Person(int a = 0, string n = "none", double w = 0.0);
        Person(int a, string n, double w);
        //Person(int a, string n, double w);
        
        //
        void SetAge(int a);//Setter
        int  GetAge(); //Getter
        void SetName(string n);
        string GetName();
        void SetWeight(double w);
        double GetWeight();

        void ShowInfo() const; //Constant Getter

};


#endif /* ----- #ifndef PERSONCLASS__INC__ ----- */

