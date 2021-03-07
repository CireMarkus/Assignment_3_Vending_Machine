#pragma once
class Cookies
{
private: 
	int mItemType = 0;
	float mItemPrice = 0.0;
public:
	// Function that returns the item type
	int getItemType();
	// Returns the price of the item
	float getItemPrice();

	Cookies(int itemType) : mItemType(itemType) {
		
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
};

