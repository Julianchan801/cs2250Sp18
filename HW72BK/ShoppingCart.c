/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2018 09:38:14 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "ItemToPurchase.h"
#include "ShoppingCart.h"

// Constants

// Function Prototypes

// Function Definitions



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Add Item
 *  Description:  Adds an item to cartItems array. Has parameters ItemToPurchase 
 *  and ShoppingCart. Returns ShoppingCart object.
 * =====================================================================================
 */
ShoppingCart addItem(ShoppingCart sc, ItemToPurchase item)
{
    //Try to get the syntax to add a cart item below
    sc.cartItems[sc.cartSize].itemPrice = item.itemPrice; //HELP WITH THIS???
    sc.cartItems[sc.cartSize].itemQuantity = item.itemQuantity; //HELP WITH THIS???
    sc.cartItems[sc.cartSize].itemName = item.itemName; //HELP WITH THIS???
    sc.cartItems[sc.cartSize].itemDescription = item.Description; //HELP WITH THIS???
    sc.cartSize = sc.cartSize + 1;
    return sc;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  RemoveItem
 *  Description:  Removes item from cartItems array (does not just set quantity to 0;
 *  removed item will not take up a slot in array). Has a char[ ](an item's name) and a ShoppingCart parameter. Returns ShoppingCart object.
 *  If item name cannot be found, output this message: Item not found in cart. 
 *  Nothing removed.
 * =====================================================================================
 */
ShoppingCart RemoveItem(char name, ShoppingCart sc )
{

   // int key = -1;
    //find the item
    for(int i = 0; i < 10; i++)
    {
        if(strcmp(sc.cartItems[i].itemName, name) )
        {
            MakeItemBlank(sc.cartItems[i]);//does not just set quantity to 0; removed item will not take up a slot in array)
            //key = i
        }//end of if
        else
        {
            printf("Item not found in cart. Nothing removed.\n");
        }//end of else

    }//end of for
    
    sc.cartSize = sc.cartSize - 1;
    return sc;
}//end of function



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ModifyItem
 *  Description:  Modifies an item's description, price, and/or quantity. 
 *  Has parameters ItemToPurchase and ShoppingCart. Returns ShoppingCart object.
 * =====================================================================================
 */
ShoppingCart ModifyItem(ShoppingCart sc, ItemToPurchase item){

    for( int i = 0; i < 10, i++){
        if(strcmp(sc.cartItems[i].itemName, name) )
        {
            printf("Enter a new item description\n");
            scanf("%s", sc.cartItems[i].itemDescription);
            printf("Enter the item price:\n");
            scanf("%d", sc.cartItems[i].itemPrice);
            printf("Enter the item quantity\n");
            scanf("%d", sc.cartItems[i].itemQuantity);
            
        }//end of if
        else
        {
            printf("Item not found in cart.\n");
        }//end of else
    }//end of for loop

    return sc;
}//end of function


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNumItemsInCart
 *  Description:  Returns quantity of all items in cart. Has a ShoppingCart parameter.
 * =====================================================================================
 */
int GetNumItemsInCart(ShoppingCart sc)
{
    return sc.cartSize;
}//end of function


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetCostOfCart
 *  Description:  Determines and returns the total cost of items in cart. Has a ShoppingCart parameter.
 * =====================================================================================
 */
int GetCostOfCart(ShoppingCart sc)
{
    int cost = 0;
    for(int i = 0; i < sc.cartSize; i++ )
    {
        cost = cost + sc.cartItems[i].itemQuantity * sc.cartItems[i].itemPrice;
    }
    return cost;
}//end of function

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintTotal
 *  Description:  Outputs total of objects in cart. Has a ShoppingCart parameter.
 *  If cart is empty, output this message: SHOPPING CART IS EMPTY
 * =====================================================================================
 */
void PrintTotal(ShoppingCart sc)
{
    if(sc.cartSize == 0)
    {
        printf("SHOPPING CART IS EMPTY\n");
    }//end of if
    else
    {
        printf("%s - %s\n Number of Items: %d\n\n", &sc.customerName, &sc.currentDate, &sc.cartSize);
        for(i = 0; i < sc.cartSize; i++)
        {
            printf("%s %d @ $%d = %d\n", sc.cartItems[i].itemName, sc.cartItems[i].itemQuantity, 
            sc.cartItems[i].itemPrice, sc.cartItems[i].itemQuantity * sc.cartItems[i].itemPrice);

        }//end of for loop
    }//end of else
    printf("Total: $%d\n", GetCostOfCart(ShoppingCart sc) );
    return;
}//end of function


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintDescriptions
 *  Description:  Outputs each item's description. Has a ShoppingCart parameter.
 * =====================================================================================
 */
void PrintDescriptions(ShoppingCart sc)
{

        printf("%s's shopping cart %s\n\nItem Descriptions\n", &sc.customerName, &sc.currentDate);
        for(i = 0; i < sc.cartSize; i++)
        {
            printf("%s\n", sc.cartItems[i].itemDescription);
        }//end of for loop
    return;
}//end of function


