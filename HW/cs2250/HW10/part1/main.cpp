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
#include "ItemToPurchase.h"

// Constants
// Function Prototypes
// Main Function
// Main Function
int main()
{
    ItemToPurchase item[1];
        int p;
        int q;
        string name;

        //get user input and set the values

        //FIRst data point ====================
        cout << "Item " <<  1 << endl;

        cout << "Enter the item name:" << endl;
        getline(cin, name);
        //cin >> name;
        //cin.ignore();
        item[0].SetName(name);

        cout << "Enter the item price:" << endl;
        cin >> p;
        //cin.ignore();

        item[0].SetPrice(p);

        cout << "Enter the item quantity:" << endl;
        cin >> q;
        //cin.ignore();
        item[0].SetQuantity(q);


        //Data point 2 ================================
                cout << endl << "Item " << 2 << endl;

        cin.ignore();
        cout << "Enter the item name:" << endl;
        getline(cin, name);
        //cin >> name;
        item[1].SetName(name);

        cout << "Enter the item price:"  << endl;
        cin >> p;
      //  cin.ignore();

        item[1].SetPrice(p);

        cout << "Enter the item quantity:"  << endl;
        cin >> q;
      //  cin.ignore();
        item[1].SetQuantity(q);



    cout << "TOTAL COST" << endl;
   item[0].ShowInfo();
   item[1].ShowInfo();


    cout << endl <<"Total: $" << item[0].GetCost() + item[1].GetCost() << endl;
    return 0;
}

// Function Definitions


