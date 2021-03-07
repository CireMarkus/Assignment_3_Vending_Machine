#pragma once
class Chocolate
{
private: 
	int mItemType = 0; 
	float mItemPrice = 0.00;

public:
	//Return the item's type
	int getItemType();
	//Return the item's price
	float getItemPrice();
};

