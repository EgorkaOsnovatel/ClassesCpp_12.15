#pragma once

#include <iostream>

class Flat
{
private:
	int size = NULL, price = NULL;
public:
	Flat(int size, int price);

	int GetSize();
	int GetPrice();

	bool operator==(Flat otherFlat);
	bool operator<(Flat greaterFlat);
	void operator=(Flat assignFlat);
};

