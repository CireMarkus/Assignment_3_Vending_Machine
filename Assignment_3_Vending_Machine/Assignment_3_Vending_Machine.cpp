// Assignment_3_Vending_Machine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Chips.h"
#include "Cookies.h"
#include "Chocolate.h"
#include "Gum.h"
#include "Drink.h"

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	Drink drink1 = Drink(1);
	Drink drink2 = Drink(2);
	Drink drink3 = Drink(3);
	Drink drink4 = Drink(4);
	Drink drink5 = Drink();



	cout << fixed << setprecision(2);

	cout << "Item Type: " << drink1.getItemType() << "\n" << "Item Price: " << drink1.getItemPrice() << "\n\n\n";
	cout << "Item Type: " << drink2.getItemType() << "\n" << "Item Price: " << drink2.getItemPrice() << "\n\n\n";
	cout << "Item Type: " << drink3.getItemType() << "\n" << "Item Price: " << drink3.getItemPrice() << "\n\n\n";
	cout << "Item Type: " << drink4.getItemType() << "\n" << "Item Price: " << drink4.getItemPrice() << "\n\n\n";
	cout << "Item Type: " << drink5.getItemType() << "\n" << "Item Price: " << drink5.getItemPrice() << "\n\n\n";

	return 0;
}


