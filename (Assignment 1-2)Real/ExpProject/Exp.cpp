#include "Exp.h"

Exp::Exp()
{
	base = 1;
	exponent = 1;
}

Exp::Exp(int base)
{
	this->base = base;
	exponent = 1;
}

Exp::Exp(int base, int exponent)
{
	this->base = base;
	this->exponent = exponent;
}

int Exp::getValue()
{
	int value = 1;
	for (int i = 0; i < exponent; i++)
		value = value * base;
	return value;
}

int Exp::getBase()
{
	return base;
}

int Exp::getExp()
{
	return exponent;
}

int Exp::equals(Exp b)
{
	int aValue = this->getValue();
	int bValue = b.getValue();
	return (aValue == bValue);
}