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
#include <stdlib.h>
#include "ItemToPurchase.h"

// Constants
// Function Prototypes

// Main Function
int main()
{

    char dummy1[100];
    char dummy2[100];
    
    ItemToPurchase first;
    ItemToPurchase second;
    //Prompt the user for dummy2 the first item
    printf("Item 1\nEnter the item name:\n");
   //fgets(first.itemName,100,stdin);
    //scanf("%[^\n]s",first.itemName);
    scanf("%s", dummy1);
    scanf("%s", dummy2);
    strcat(dummy1, " ");
    strcat(dummy1,dummy2);
    strcpy(first.itemName, dummy1);
    printf("Enter the item price:\n");
    scanf("%d", &first.itemPrice);//Why is this not a pointer??
    printf("Enter the item quantity:\n");
    scanf("%d", &first.itemQuantity); 
    // flush
    fflush(stdin);
    
    //For the second item
    //scanf("%s", dummy1);
    printf("\nItem 2\nEnter the item name:\n");
   // fgets(second.itemName,100,stdin);
   // scanf("%[^\n]s",second.itemName);
    scanf("%s", dummy1);
    scanf("%s", dummy2);
    strcat(dummy1, " ");
    strcat(dummy1,dummy2);
    strcpy(second.itemName, dummy1);
    printf("Enter the item price:\n");
    scanf("%d", &second.itemPrice);//Why is this not a pointer??
    printf("Enter the item quantity:\n");
    scanf("%d", &second.itemQuantity);
    // flush
    fflush(stdin);

    //Call the function to print total cost

    PrintItemCost(first, second);

    return 0;
}
// Function Definitions


