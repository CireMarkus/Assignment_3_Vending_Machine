#include "Chips.h"


// Returns the item type
int Chips::getItemType()
{
    
    return mItemType;
}


// Returns the price of the item
float Chips::getItemPrice()
{
  
    return mItemPrice;
}

Chips::Chips(int itemType): mItemType(itemType)
{
	switch (mItemType)
	{
	case 1:
		mItemPrice = 0.75;
		break;
	case 2:
		mItemPrice = 1.00;
		break;
	case 3:
		mItemPrice = 1.25;
		break;
	default:
		mItemType = 1;
		mItemPrice = 0.75;
		break;
	}
}

Chips::Chips():Chips(1)
{
}

