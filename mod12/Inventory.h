/*
 * =====================================================================================
 *
 *       Filename:  Inventory.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/2018 09:27:29 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  INVENTORY__INC__
#define  INVENTORY_INC__
    
class InventoryItem {
    public:
        //Constructor
        //Only the prototype
        void PrintItem();
        InventoryItem(string initName = "", int initQty = 0);
    private:
        string itemName;  // Name of item
        int itemQuantity; // Number of items available
};

#endif /* ----- #ifndef INVENTORY__INC__ ----- */

