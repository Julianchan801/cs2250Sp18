/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  item information
 *
 *        Version:  1.0
 *        Created:  03/27/2018 08:55:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE_INC__
    <+DETAILED+>

typedef struct ItemToPurchase
{
    char itemName[50];
    char itemDescription[50];
    int itemPrice;
    int itemQuantity;

}ItemToPurchase;

void MkaeItemBlank(ItemToPurchase* item);
void PrintItemCost(ItemToPurchase item);
void PrintItemDescription(ItemToPurchase item);

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

