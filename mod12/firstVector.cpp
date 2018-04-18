/*
 * =====================================================================================
 *
 *       Filename:  firstVector.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/2018 08:37:47 AM
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
#include <vector> // for vectors
// Constants

// Function Prototypes

// Main Function
int main()
{
    vector <int> g1;
    vector <int> :: iterator j; // an iterator for vectors
    // An iterator is basically a pointer

    // add elements
    for(int i = 1; i < 5; i++)
    {
        g1.push_back(i * 2); // add element to the end of the vector
    }

    cout << "Output of begin and end\n";
    //Use an iterator to loop over elements
    for(j = g1.begin(); j != g1.end(); j++)
    {
        //Dereference the iterator to get 
        //the value
        cout << *j << '\t';
    }

    cout << endl;
    //To add an iterate:
    // push_back(): Add element at end of vector
    // begin(): takes the first element of vector
    // end(): takes last element of vector
    // -----------------------------------------------------------
    //Capacity:
    ////size(): returns the size of the vector
    // max_size(): Returns the maximum number of elements that the vector can hold
    // capacity(): Returns the size of storage (bytes)
    // empty(): Returns whether the container is empty

    cout << "Size: " << g1.size() << endl;
    cout << "Capacity: " << g1.capacity() << endl;
    cout << "Max Size: " << g1.max_size() << endl;

    ///Accessing the elements:
    // 1) Reference operator [g]: Returns a reference to the element at position 'g'
    // 2) at(g) : returns a reference to the element at position 'g'
    // 3) front(): returns a reference tot he first element
    // 4) back(): Returns a reference to the last element
    // 

    cout << "Reference Operator [g]: g1[2] =  " <<g1[2] << endl;
    cout << "at: g1.at(1) =  " <<g1.at(1) << endl;
    cout << "front (): g1.front() =  " <<g1.front() << endl;
    cout << "back(): g1.back() =  " <<g1.back() << endl;

    return 0;
}
// Function Definitions


