#include <iostream>
using namespace std;

#include "Container.h"

void Container::fill(int n)
{
	size = size + n;
}

bool Container::consume(int n)
{
	if (size >= n)
	{
		size = size - n;
		return 1;
	}
	else
	{
		cout << "원료가 부족합니다" << endl;
		return 0;
	}
}

int Container::getSize()
{
	return size;
}