#include "Gum.h"

int Gum::getItemType()
{


	return mItemType;
}

float Gum::getItemPrice()
{
	return mItemPrice;
}

Gum::Gum(int itemType): mItemType(itemType)
{
	switch (mItemType)
	{
	case 1:
		mItemPrice = 0.50;
		break;
	case 2:
		mItemPrice = 0.75;
		break;
	case 3:
		mItemPrice = 1.00;
		break;
	default:
		mItemType = 1;
		mItemPrice = 0.50;
		break;
	}
}

Gum::Gum():Gum(1)
{
}
