#include "Drink.h"

int Drink::getItemType()
{
    return mItemType;
}

float Drink::getItemPrice()
{
    return mItemPrice;
}

Drink::Drink(int itemType): mItemType(itemType)
{
	switch (mItemType)
	{
	case 1: 
		mItemPrice = 0.50;
		break;
	case 2:
		mItemPrice = 1.00;
		break;
	case 3:
		mItemPrice = 1.50;
		break;
	default:
		mItemType = 1;
		mItemPrice = 0.50;
		break;
	}
}

Drink::Drink():Drink(1)
{
}
