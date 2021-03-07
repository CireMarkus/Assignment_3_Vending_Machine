#pragma once
class Drink
{
private: 
	int mItemType = 0;
	float mItemPrice = 0.0;

public: 
	//Returns the type of the item
	int getItemType();
	//Returns the price of the item
	float getItemPrice();
	
	//Parameterized Constructor
	Drink(int);
	//Default Constructor
	Drink();
};

