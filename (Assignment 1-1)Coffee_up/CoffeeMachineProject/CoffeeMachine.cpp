#include <iostream>
using namespace std;
#include "CoffeeMachine.h"

CoffeeMachine::CoffeeMachine(int a, int b, int c)
{
	coffee = a;
	water = b;
	sugar = c;
}

int CoffeeMachine::drinkEspresso()
{
	cout << "Espresso" << endl;
	coffee = coffee - 1;
	water = water - 1;
	return 0;
}

int CoffeeMachine::show()
{
	cout << "Ä¿ÇÇ:" << coffee << "\t";
	cout << "¹°:" << water << "\t";
	cout << "¼³ÅÁ:" << sugar << endl << endl;
	return 0;
}

int CoffeeMachine::drinkAmericano()
{
	cout << "Americano" << endl;
	coffee = coffee - 1;
	water = water - 2;
	return 0;
}

int CoffeeMachine::drinkSugarCoffee()
{
	cout << "SugarCoffee" << endl;
	coffee = coffee - 1;
	water = water - 2;
	sugar = sugar - 1;
	return 0;
}

int CoffeeMachine::fill()
{
	coffee = 10;
	water = 10;
	sugar = 10;
	cout << "FILL UP!!" << endl;
	return 0;
}