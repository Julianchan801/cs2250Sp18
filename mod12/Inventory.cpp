/*
 * =====================================================================================
 *
 *       Filename:  Inventory.cpp
 *
 *    Description:  Inventory class definitions
 *
 *        Version:  1.0
 *        Created:  04/17/2018 09:29:21 AM
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
#include "Inventory.h"

InventoryItem::InventoryItem(string initName, int initQty) {
    itemName = initName;
    itemQuantity = initQty;

    return;
}

//InventoryItem function to print name/qty attributes
void InventoryItem::PrintItem() {
    cout << "name: " << this->itemName << ", " << "quantity: "
        << this->itemQuantity << endl;

    return;
}

// Constants

// Function Prototypesi
//
// Displays all items currently stored in vector itemsInventory
///
//
//
//
//
//
//
