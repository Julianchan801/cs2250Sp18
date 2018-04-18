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
//const int sSize = 100;
// Main Function
int main()
{
    ShoppingCart info;
    ItemToPurchase item;
    printf("Enter Customer's Name:\n");
    fgets(info.customerName,sizeof(info.customerName), stdin);
    //fflush(stdin);
    printf("Enter Today's Date:\n\n");
    fgets(info.currentDate,sizeof(info.currentDate), stdin);
    //fflush(stdin);
    getchar();
    printf("Customer Name: %s\n", info.customerName);
    printf("Today's Date: %s\n", info.currentDate);
    //getchar();

//Initialize some variables

char name[100];
char choice = 'y';
//int number;
info.cartSize = 0;

while(choice != 'q')
    {
        printf("\nMENU\na - Add item to cart\nr - Remove item from cart\nc - Change item quantity\ni - Output items' descriptions\no - Output shopping cart\nq - Quit\n\n");
        
        scanf(" %c", &choice);

        switch(choice)
        {
            case 'a':
                //Call a function
                //ass item to card
                getchar();
                printf("ADD ITEM TO CART\nEnter the item name:\n");
                fgets(item.itemName, sizeof(item.itemName), stdin);
                //scanf("%s", item.itemName); 
                printf("Enter the item description:\n");
                fgets(item.itemDescription,sizeof(item.itemDescription),stdin);
                //fflush(stdin);
                printf("Enter the item price:\n");
                scanf("%d", &item.itemPrice); 
                printf("Enter the item quantity:\n");
                scanf("%d", &item.itemQuantity); 
                //getchar();
                info = AddItem(info, item);
                break;
            case 'r':
                //Call a function
                //Remove item from cart
                printf("REMOVE ITEM FROM CART\nEnter name of item to remove:\n");
                fgets(name,sizeof(name),stdin);
                //fflush(stdin);
                getchar();
                info = RemoveItem(name, info );
                break;
            case 'c':
                //Change quantities
                getchar();
                printf("CHANGE ITEM QUANTITY\nEnter the item name:\n");
                fgets(name,sizeof(name),stdin);
                //fflush(stdin);
               // printf("Enter the new quantity:\n");
                //scanf("%d", &number);
               // getchar();
                //item.itemQuantity = number;
                strcpy(item.itemName,name);
                info = ModifyItem(info, item);
                //Call a function
                break;
            case 'i':
                //Call a function
                printf("OUTPUT ITEMS' DESCRIPTIONS\n");
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


