#include "Cookies.h"


// Function that returns the item type
int Cookies::getItemType()
{
 
    return mItemType;
}


// Returns the price of the item
float Cookies::getItemPrice()
{
 
    return mItemPrice;
}

Cookies::Cookies(int itemType) : mItemType(itemType)
{
	switch (mItemType)
	{
	case 1:
		mItemPrice = 1.00;
		break;
	case 2:
		mItemPrice = 1.25;
		break;
	case 3:
		mItemPrice = 1.50;
		break;
	default:
		mItemPrice = 1.00;
		mItemType = 1;
		break;
	}
}

Cookies::Cookies():Cookies(1)
{
}
