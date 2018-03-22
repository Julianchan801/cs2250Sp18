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
#include "ItemToPurchase.h"

// Constants

// Function Prototypes

// Main Function
int main()
{

    ItemToPurchase first, second;
    //Prompt the user for the first item
    printf("Item 1\nEnter the item name:\n");
    scanf("%s", first.itemName);//Why is this a pointer??
    printf("Enter the item price:\n");
    scanf("%d", &first.itemPrice);//Why is this not a pointer??
    printf("Enter the item quantity:\n");
    scanf("%d", &first.itemQuantity);
    
    fflush(stdin);//Why do I need this?????

    //Prompt the user for the second item
    printf("Item 2\nEnter the item name:\n");
    scanf("%s", second.itemName);//Why is this a pointer??
    printf("Enter the item price:\n");
    scanf("%d", &second.itemPrice);//Why is this not a pointer??
    printf("Enter the item quantity:\n");
    scanf("%d", &second.itemQuantity);

    //Call the function to print total cost

    PrintItemCost(first, second);

    return 0;
}
// Function Definitions


