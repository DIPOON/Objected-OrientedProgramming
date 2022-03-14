#ifndef RAM_H
#define RAM_H

class Ram
{
public:
	int address;
	int value;
	char mem[100 * 1024];
	Ram();
	int read(int addr);
	int write(int addr, char value);
	~Ram();
};

#endif