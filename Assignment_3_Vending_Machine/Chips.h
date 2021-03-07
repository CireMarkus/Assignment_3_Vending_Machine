#pragma once
class Chips
{
private:
	int mItemType = 0;
	float mItemPrice = 0.0;
public:
	// Returns the item type
	int getItemType();
	// Returns the price of the item
	float getItemPrice();
	
	//Paramertized constructor accepts item type
	Chips(int itemtype): mItemType(itemtype){
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
		
	};

	Chips() :Chips(1) {
	};

};

