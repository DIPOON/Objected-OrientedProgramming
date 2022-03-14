#include <iostream>
using namespace std;
#include "Ram.h"

Ram::Ram()
{
}

int Ram::read(int addr)
{
	return this->mem[addr];
}

int Ram::write(int addr, char value)
{
	mem[addr] = value;
	return 0;
}

Ram::~Ram()
{
	cout << "메모리 제거" << endl;
}