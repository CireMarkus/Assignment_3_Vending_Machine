#pragma once
class Gum
{
private: 
	int mItemType = 0;
	float mItemPrice = 0.0;

public: 
	//Returns the item type
	int getItemType();

	//Returns the price of the item
	float getItemPrice();
	
	Gum(int itemType): mItemType(itemType){

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
			mItemPrice = 0.50;
			break;
		}
	}


};

