#ifndef EXP_H
#define EXP_H

class Exp
{
public:
	Exp();
	Exp(int base);
	Exp(int base, int exponent);
	int exponent;
	int base;
	int getValue();
	int getBase();
	int getExp();
	int equals(Exp b);
};
#endif