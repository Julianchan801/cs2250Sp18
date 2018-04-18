/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2018 09:37:49 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SHOPPINGCART__INC__
#define  SHOPPINGCART_INC__
#include "ItemToPurchase.h"

typedef struct ShoppingCart
{
    char customerName[100];
    char currentDate [100];
    ItemToPurchase cartItems[10];
    int cartSize
}ShoppingCart;

//Functions
ShoppingCart addItem(ShoppingCart* sc, ItemToPurchase item);
ShoppingCart RemoveItem(char name, ShoppingCart sc );
ShoppingCart ModifyItem(ShoppingCart* sc, ItemToPurchase item);
int GetNumItemsInCart(ShoppingCart sc);
int GetCostOfCart(ShoppingCart sc);
void PrintTotal(ShoppingCart sc);
void PrintDescriptions(ShoppingCart sc);

#endif /* ----- #ifndef SHOPPINGCART__INC__ ----- */

