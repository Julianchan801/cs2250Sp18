#include <iostream>
#include <string>
using namespace std;

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() 
{
    customerName = "none";
    currentDate = "January 1, 2016";
    //Check if the below is needed
    vector<ItemToPurchase> cartItems;
}

ShoppingCart::ShoppingCart(string name, string date) 
{
    customerName = name;
    currentDate = date;
    //check if the below is needed
    vector<ItemToPurchase> cartItems;
}

string ShoppingCart::GetCustomerName() const
{
    return customerName;
}

string ShoppingCart::GetDate() const
{
    return currentDate;
}

//Adds an item to cartItems vector. Has parameter ItemToPurchase. Does not return anything.
void ShoppingCart::AddItem(ItemToPurchase item)
{
    cartItems.insert(cartItems.begin() + 0, item);
    return;
}

void ShoppingCart::RemoveItem(string name){
    int i = -1;
    for( int j = 0; j < cartItems.size(); j++)
    {
        if(cartItems.at(j).GetName() == name )
        {
            i = j;
        }
    }
    if( i >= 0) 
    {
        cartItems.erase(cartItems.begin() + i);
    }
    else{
        cout << "Item not found in cart. Nothing removed." << endl;
    }
    return;
}
//Modifies an item's description, price, and/or quantity. Has parameter ItemToPurchase. 
//Does not return anything.
//If item can be found (by name) in cart, check if parameter has
// default values for description, price, and quantity. If not, modify item in cart.
//If item cannot be found (by name) in cart, output this message: 
//Item not found in cart. Nothing modified.
void ShoppingCart::ModifyItem(ItemToPurchase item){
    int flag = 0;
    for( int j = 0; j < cartItems.size(); j++)
    {
        if(cartItems.at(j).GetName() == item.GetName() &&
                cartItems.at(j).GetPrice() != 0 &&
                cartItems.at(j).GetQuantity() != 0 &&
                cartItems.at(j).GetDescription()  != "none" )
        {
            cartItems.at(j).SetQuantity( item.GetQuantity() );
            flag = 1;
        }//end of if
    }//end of for loop

    if(flag == 0){
        cout << "Item not found in cart. Nothing modified." << endl;
    }
    return;
}


int ShoppingCart::GetNumItemsInCart(){
    return cartItems.size();
}

double ShoppingCart::GetCostOfCart(){
    double cost =0;
    for( int j = 0; j < cartItems.size(); j++)
    {
        cost += cartItems.at(j).GetCost();
    }
    return cost;
}

void ShoppingCart::PrintTotal(){
    //John Doe's Shopping Cart - February 1, 2016
    cout << customerName <<"'s Shopping Cart - " << currentDate << endl;
    int totalNum = 0;
    for (int i=0; i<cartItems.size(); i++)
    {
        totalNum += cartItems.at(i).GetQuantity();
    }
    cout << "Number of Items: " << totalNum << endl << endl; 

    for( int j = 0; j < cartItems.size(); j++)
    {
        cartItems.at(j).PrintItemCost();
    }

    if(cartItems.size() == 0){
        cout << "SHOPPING CART IS EMPTY" <<endl << endl;
    }
    //Added and end line below
    cout << endl << "Total: $" <<  GetCostOfCart()  << endl;
    return;
}

void ShoppingCart::PrintDescriptions()
{
    cout << customerName <<"'s Shopping Cart - " << currentDate << endl;
    cout << "Item Descriptions" << endl;

    for( int j = 0; j < cartItems.size(); j++)
    {
        cartItems.at(j).PrintItemDescription();
    }
    return;
}
