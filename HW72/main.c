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
//#include "ItemToPurchase.h"
#include "ShoppingCart.h"
const int sSize = 100;
// Main Function
int main()
{
    ShoppingCart info;
    ItemToPurchase item;
    printf("Enter Customer's Name:\n");
    fgets(info.customerName,sSize, stdin);
    printf("Enter Today's Date:\n");
    fgets(info.currentDate,sSize, stdin);
    printf("Customer Name: %s\n", info.customerName);
    printf("Today's Date: %s\n", info.currentDate);



char name[100];
char choice = 'y';
int number;

while(choice != 'q')
    {
        printf("\nMENU\na - Add item to cart\nr - Remove item from cart\nc - Change item quantity\ni - Output items' descriptions\no - Output shopping cart\nq - Quit\n");
        
        scanf(" %c", &choice);

        switch(choice)
        {
            case 'a':
                //Call a function
                printf("ADD ITEM TO CART\nEnter the item name:\n");
                scanf("%s", item.itemName); 
                printf("Enter the item description:\n");
                scanf("%s", item.itemDescription); 
                printf("Enter the item price:\n");
                scanf("%d", &item.itemPrice); 
                printf("Enter the item quantity:\n");
                scanf("%d", &item.itemQuantity); 
                AddItem(info, item);
                break;
            case 'r':
                //Call a function
                printf("REMOVE ITEM FROM CART\nEnter name of item to remove:\n");
                fgets(name,100,stdin);
                RemoveItem(name, info );
                break;
            case 'c':
                printf("REMOVE ITEM FROM CART\nEnter name of item to remove:\n");
                fgets(name,100,stdin);
                printf("Enter the new quantity:\n");
                scanf("%d", &number);
                item.itemQuantity = number;
                strcpy(item.itemName,name);
                ModifyItem(info, item);
                //Call a function
                break;
            case 'i':
                //Call a function
                PrintDescriptions(info);
                break;
            case 'o':
                //Call a function
                PrintTotal( info );
                break;
            case 'q':
                //Call a function
                break;
            default:
                printf("Invalid choice\n");

        }//end of switch

        //Deals with the case of q and exits out of while loop
        if(choice == 'q'){
            break;
        }//end of if

    }//end of switch

    //PrintItemCost(first, second);

    return 0;
}
// Function Definitions


