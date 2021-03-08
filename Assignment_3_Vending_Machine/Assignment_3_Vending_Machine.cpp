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
#include <ctype.h>
using namespace std;


//Function to calculate the change to the customer.
void changeCalculator(float, float const&);
//Function that takes payment from the customer.
float payment(float const&);
//Function that tells the customer goodbye.
void partingMessage(bool&);


int main()
{
	char categoryChoice = ' ';
	int itemType = 0;
	float additionalPayment = 0.0;
	Chips chips;
	Cookies cookies;
	Chocolate chocolate;
	Gum gum;
	Drink drink;
	bool flag = true;

	cout << "Welcome to the vending machine!"; 
	
	while (flag) {

		cout << fixed << setprecision(2);

		cout << "\n\nPlease choose what category you would like : \n";
		cout << "A. Chips \nB. Cookies \nC. Gum \nD. Chocolate \nE. Drink\n";

		cout << "\n\nInput: ";
		cin >> categoryChoice;

		switch (toupper(categoryChoice))
		{
		//Case if the customer chooses chips 
		case 'A':
			cout << "You have chosen chips! \n\nWhat type of chips would you like:\n\n";
			cout << "1. Type 1 \n2. Type 2 \n3. Type 3\nInput:";
			cin >> itemType;

			chips = Chips(itemType);

			cout << "\n\nYou chose chip type " << chips.getItemType() << " with a cost of $" << chips.getItemPrice() << endl;

			changeCalculator(payment(chips.getItemPrice()), chips.getItemPrice());

			partingMessage(flag);


			break;

		//Case if the customer chooses cookies 
		case 'B':
			cout << "You have chosen cookies! \n\nWhat type of cookies would you like:\n\n";
			cout << "1. Type 1 \n2. Type 2 \n3. Type 3\nInput:";
			cin >> itemType;

			cookies = Cookies(itemType);

			cout << "\n\nYou chose cookie type " << cookies.getItemType() << " with a cost of $" << cookies.getItemPrice() << endl;

			changeCalculator(payment(cookies.getItemPrice()), cookies.getItemPrice());

			partingMessage(flag);
			break;

		//case if the customer chooses gum
		case 'C':
			cout << "You have chosen gum! \n\nWhat type of gum would you like:\n\n";
			cout << "1. Type 1 \n2. Type 2 \n3. Type 3\nInput:";
			cin >> itemType;

			gum = Gum(itemType);

			cout << "\n\nYou chose gum type " << gum.getItemType() << " with a cost of $" << gum.getItemPrice() << endl;

			changeCalculator(payment(gum.getItemPrice()), gum.getItemPrice());

			partingMessage(flag);
			break;

		//case if the customer chooses chocolate
		case 'D':
			cout << "You have chosen chocolate! \n\nWhat type of chocolate would you like:\n\n";
			cout << "1. Type 1 \n2. Type 2 \n3. Type 3\nInput:";
			cin >> itemType;

			chocolate = Chocolate(itemType);

			cout << "\n\nYou chose chocolate type " << chocolate.getItemType() << " with a cost of $" << chocolate.getItemPrice() << endl;

			changeCalculator(payment(chocolate.getItemPrice()), chocolate.getItemPrice());

			partingMessage(flag);
			break;

		//case if the customer chooses drinks
		case 'E':
			cout << "You have chosen drinks! \n\nWhat type of drink would you like:\n\n";
			cout << "1. Type 1 \n2. Type 2 \n3. Type 3\nInput:";
			cin >> itemType;

			drink = Drink(itemType);

			cout << "\n\nYou chose drink type " << drink.getItemType() << " with a cost of $" << drink.getItemPrice() << endl << endl;

			changeCalculator(payment(drink.getItemPrice()), drink.getItemPrice());

			partingMessage(flag);
			break;

		//default statement if the cusotmer enters and invalid category. 
		default:
			cout << "Sorry, we do not server that option.";
			break;
		}

	}
	return 0;
}

void changeCalculator(float payment, float const& price)
{
	cout << fixed << setprecision(2);
	cout << "\n\nYour change is : $"<< payment - price<<"\n";





	int change = (payment - price) * 100;
	int dollars = 0;
	int quarters = 0; 
	int dimes = 0; 
	int nickles = 0; 
	int pennies = 0;

	//Logic to print how many dollars, quarters, dimes, nickles, and pennies the customer gets back. 
	if (change < 0) {
		cout << "You must provide a payment equal to or greater than the price of the item you are purchasing.\n\n";

	}
	else {
		if (change > 99) {
			dollars = floor(change / 100);
			change = change % 100;
		}

		if (change > 24) {
			quarters = floor(change / 25);
			change = change % 25;
		}

		if (change > 9) {
			dimes = floor(change / 10);
			change = change % 10;
		}

		if (change > 4) {
			nickles = floor(change / 5);
			change = change % 5;
		}

		pennies = floor(change / 1);
		change = change % 1;


		cout << "Depensing:\n	" << dollars << " :dollar(s)\n	" << quarters << " :quarter(s)\n	" << dimes << " :dime(s)\n	" << nickles << " :nickle(s)\n	" << pennies << " :penn(y/ies)\n\n\n";
		
	}




}

//Logic to get the payment from the customer. 
//If the customer provides more than 10.00 then the vending machine notifices we do not accept over 10.00
//If the customer provides less than the amount of the item, they can either add more money or exit if they do not have enough.
float payment(float const& price) {
	
	float payment = 0.0;
	float additionalPayment = 0.0;

	cout << "Please input your payment: ";
	cin >> payment;

	while (payment < price || payment > 10.00) {
		cout << fixed << setprecision(2);
		if (payment < price) {
			cout << "\n\n\nYour payment was not enough you owe $" << (price - payment) << " please provide this amount or enter -1 to cancel transaction: ";
			cin >> additionalPayment;
			if (additionalPayment < 0) {
				break;
			}
			else {
				payment += additionalPayment;
			}

		}
		else if (payment > 10.00) {
			cout << "We do not accept payment over $10.00 please provide less than  or equal to $10.00 or enter -1 to exit: ";
				cin >> payment;
		}
	}



	return payment;
}


//Parting message to the customer and tells them to grab their item.
void partingMessage(bool& flag) {

	cout << "Thank you, your item is in the dispenser. Goodbye.\n\n\n\n";
	flag = false;
}