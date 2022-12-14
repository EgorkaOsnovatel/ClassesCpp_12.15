#pragma once

#include <iostream>

class Overcoat
{
private:
	int size = NULL, price = NULL;

public:
	Overcoat(int size, int price);

	int GetSize();
	int GetPrice();

	bool operator==(Overcoat otherOvercoat);
	bool operator<(Overcoat greaterOvercoat);
	void operator=(Overcoat assignOvercoat);
};

