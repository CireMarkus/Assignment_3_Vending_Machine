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
	Chips(int);

	//Default contructor
	Chips();

};

