// Assignment_3_Vending_Machine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Chips.h"
#include "Cookies.h"
#include "Chocolate.h"
#include "Gum.h"
#include "Drink.h"

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


//TODO: Create function to calculate change
void changeCalculator(float*, float*);

int main()
{
	//TODO: Create  Menu


	return 0;
}

void changeCalculator(float* payment, float* price)
{
	int change = (*payment - *price)* 100;

	int dollars = 0;
	int quarters = 0; 
	int dimes = 0; 
	int nickles = 0; 
	int pennies = 0;


	if (change < 0) {
		cout << "You must provide a payment equal to or greater than the price of the item you are purchasing.\n\n";

	}
	else {
		if (change > 99) {
			dollars = floor(change / 100);
			change = change % 100;
		}
		
	}




}
