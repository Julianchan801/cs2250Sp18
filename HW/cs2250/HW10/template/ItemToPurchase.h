#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H


#include <string>
using namespace std;

class ItemToPurchase 
{

    public:
        ItemToPurchase();
        //The function below??????
        ItemToPurchase(string name, string description, 
                int price, int quantity = 1);

        void SetName(string name);
        void SetDescription(string description);
        void SetPrice(int price);
        void SetQuantity(int quantity);

        string GetName() const;
        string GetDescription() const;
        int GetPrice() const;
        int GetQuantity() const;

        void PrintItemCost() const;
        void PrintItemDescription();
        
        int GetCost() const ;

    private:
        string itemName;
        string itemDescription;
        int itemPrice;
        int itemQuantity;
};


#endif
