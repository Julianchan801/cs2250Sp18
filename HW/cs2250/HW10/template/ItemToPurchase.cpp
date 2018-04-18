#include <iostream>
using namespace std;

#include "ItemToPurchase.h"


//ItemToPurchase(); // Default Constructor
ItemToPurchase::ItemToPurchase() 
{
    itemQuantity    = 0;
    itemName        = "none";
    itemQuantity    = 0;
    itemDescription = "none";
}

//Second constructor
//NEEDS HELP!!!!!!
ItemToPurchase::ItemToPurchase(string name, string description, 
        int price, int quantity){
    itemQuantity = quantity;
    itemName     = name;
    itemPrice = price;
    itemDescription = description;
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

void ItemToPurchase::SetDescription(string description)
{
	itemDescription = description;
	return;
}

string ItemToPurchase::GetDescription() const {
	return itemDescription;
}

void ItemToPurchase::PrintItemCost() const {
    
    cout << itemName << " " << itemQuantity << " @ $" << itemPrice;
    cout << " = $" << ( itemPrice * itemQuantity ) << endl;
    return;
}


int ItemToPurchase::GetCost() const {
    int cost;
    cost = itemQuantity * itemPrice;
    return cost;
}


void ItemToPurchase::PrintItemDescription(){
	cout << itemDescription << endl;
	return;
}
