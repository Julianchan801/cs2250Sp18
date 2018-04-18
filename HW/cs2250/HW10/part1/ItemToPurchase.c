/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/21/2018 10:39:59 PM
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
#include <string.h>
// Constants

// Function Prototypes

// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintItemCost
 *  Description:  Prints the item1&2 name, quantity, costs & total cost
 * =====================================================================================
 */
void PrintItemCost(ItemToPurchase item1, ItemToPurchase item2){

    printf("\nTOTAL COST\n");
    printf("%s %d @ $%d = $%d\n",item1.itemName, item1.itemQuantity, 
            item1.itemPrice, item1.itemQuantity * item1.itemPrice);
    printf("%s %d @ $%d = $%d\n",item2.itemName, item2.itemQuantity, 
            item2.itemPrice, item2.itemQuantity * item2.itemPrice);

    printf("\nTotal: $%d\n", item1.itemQuantity * item1.itemPrice 
            + item2.itemQuantity * item2.itemPrice); 


    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  MakeItemBlank
 *  Description:  Sets- Item name = "none", item's price = 0, item quantity = 0
 * =====================================================================================
 */
void MakeItemBlank(ItemToPurchase* item)
{
    item->itemQuantity = 0;
    item->itemPrice    = 0;
    //strcpy((*item).itemName, "none");
    strcpy(item->itemName, "none");

    return;
}


