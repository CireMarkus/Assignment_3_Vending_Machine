#include "Chocolate.h"

int Chocolate::getItemType()
{
	return mItemType;
}

float Chocolate::getItemPrice()
{
	return mItemPrice;
}

Chocolate::Chocolate(int itemType): mItemType(itemType)
{
	switch (mItemType)
	{
	case 1:
		mItemPrice = 0.85;
		break;
	case 2:
		mItemPrice = 1.00;
		break;
	case 3:
		mItemPrice = 1.15;
		break;
	default:
		mItemType = 1;
		mItemPrice = 0.85;
		break;
	}
}

Chocolate::Chocolate():Chocolate(1)
{
}

