/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/21/2018 10:39:20 PM
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
//Structures
typedef struct ItemToPurchase
{
    char itemName [100];
    char itemDescription[100];
    int itemPrice;
    int itemQuantity;
}ItemToPurchase;

//Functions below
void PrintItemCost(ItemToPurchase item1, ItemToPurchase item2);
void MakeItemBlank(ItemToPurchase* item);
void PrintItemDescription(ItemToPurchase item);
void stringModifer(char a[]);


#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

