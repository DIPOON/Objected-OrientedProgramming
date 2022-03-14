#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H
class CoffeeMachine
{
public:
	int coffee;
	int water;
	int sugar;
	CoffeeMachine(int coffee, int water, int sugar);
	int drinkEspresso();
	int show();
	int drinkAmericano();
	int drinkSugarCoffee();
	int fill();
};
#endif