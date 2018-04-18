/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Warm up: Online shopping cart
 *
 *        Version:  1.0
 *        Created:  03/21/2018 10:38:13 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include "ItemToPurchase.h"
#include "ShoppingCart.h"

// Constants

// Function Prototypes

// Main Function
int main()
{

    ShoppingCart info;
    printf("Enter Customer's Name:\n");
    fgets(info.customerName,sSize, stdin);
    printf("Enter Today's Date:\n");
    fgets(info.currentDate,sSize, stdin);
    printf("Customer Name: %s\n", info.customerName)
    printf("Today's Date: %s\n", info.currentDate);

    ItemToPurchase first, second;
    //Prompt the user for the first item
    printf("Item 1\nEnter the item name:\n");
    fgets(first.itemName, sSIZE, stdin);//Why is this a pointer??
    //fflush(stdin);//Why do I need this?????
    printf("Enter the item price:\n");
    scanf("%d", &first.itemPrice);//Why is this not a pointer??
    printf("Enter the item quantity:\n");
    scanf("%d", &first.itemQuantity);
   // fflush(stdin);//Why does this not work?
    

    //Prompt the user for the second item
    printf("\nItem 2\nEnter the item name:\n");
    scanf("%s", second.itemName);//Why is this a pointer??
    fgets(second.itemName, sSIZE, stdin);//Why is this a pointer??
    printf("Enter the item price:\n");
    scanf("%d", &second.itemPrice);//Why is this not a pointer??
    printf("Enter the item quantity:\n");
    scanf("%d", &second.itemQuantity);

    //Call the function to print total cost

    PrintItemCost(first, second);

    return 0;
}
// Function Definitions


