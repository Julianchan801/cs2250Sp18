/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2018 16:53:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <iostream>  // For C++
using namespace std; // For C++
#include "ItemToPurchase.h"

// Constants
// Function Definitions

//ItemToPurchase(); // Default Constructor
ItemToPurchase::ItemToPurchase() 
{
    itemQuantity = 0;
    itemName     = "none";
    itemQuantity = 0;
}

//Second constructor
void ItemToPurchase::setItem(int p, int q, string n){
    itemQuantity = q;
    itemName     = n;
    itemQuantity = p;
    return;
}

void ItemToPurchase::SetPrice(int p){
    itemPrice = p;
    return;
}
int ItemToPurchase::GetPrice() const
{
    return itemPrice;
}
void ItemToPurchase::SetQuantity(int q)
{
    itemQuantity = q;
    return;
}

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}

void ItemToPurchase::SetName(string n)
{
    itemName = n;
    return;
}

string ItemToPurchase::GetName() const {
    return itemName;
}

void ItemToPurchase::ShowInfo() const {
    
    cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << ( itemPrice * itemQuantity ) << endl;
    return;
}

int ItemToPurchase::GetCost() const {
    int cost;
    cost = itemQuantity * itemPrice;
    return cost;
}


