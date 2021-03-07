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

	//Parameterized Constructor
	Cookies(int);

	//Unparameterized Coonstructor
	Cookies();


};

