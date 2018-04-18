/*
 * =====================================================================================
 *
 *       Filename:  PersonClass.h
 *
 *    Description:  Peson Class information
 *
 *        Version:  1.0
 *        Created:  04/12/2018 08:41:53 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h>
#include <iostream>  // For C++
using namespace std; // For C++
#ifndef  ItemToPurchaseCLASS__INC__
#define  ItemToPurchase_INC__


class ItemToPurchase{
    private: 
        int itemQuantity;
        string itemName;
        int itemPrice;
    public:
        ItemToPurchase(); // Default Constructor
        
        void setItem(int p, int q, string n); // Second Constructor

        void SetPrice(int p); // Setter
        int GetPrice() const;       // Getters

        void SetQuantity(int q); // Setter
        int  GetQuantity() const;       // Getters

        void SetName(string n);
        string GetName() const;

        void ShowInfo() const; // Constant Getter

        int GetCost() const;

        //Person operator+(Person rhs);// operator + overload
};

#endif /* ----- #ifndef ItemToPurchaseCLASS__INC__ ----- */

