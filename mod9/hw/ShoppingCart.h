/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  Functions to manage items to purchase
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:05:40 AM
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

typedef struct ShoppingCart_s
{
    char customerName[50];
    char currentDate[50];
    int cartSize;
    ItemToPurchase cartItems[10];
    
}ShoppingCart;

ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart);
ShoppingCart RemoveItem(char name[], ShoppingCart cart);
int GetNumItemsInCart(ShoppingCart cart);
void PrintTotal(ShoppingCart cart);
void PrintDescriptions(ShoppingCart cart);




#endif /* ----- #ifndef SHOPPINGCART__INC__ ----- */

