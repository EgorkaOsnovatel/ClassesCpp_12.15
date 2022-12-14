#include "Overcoat.h"

Overcoat::Overcoat(int size, int price)
{
	this->size = size;
	this->price = price;
}

int Overcoat::GetSize()
{
	return size;
}

int Overcoat::GetPrice()
{
	return price;
}

bool Overcoat::operator==(Overcoat otherOvercoat)
{
	if (this->size == otherOvercoat.size && this->price == otherOvercoat.price)
		return true;
	else
		return false;
}

void Overcoat::operator=(Overcoat assignOvercoat)
{
	this->size = assignOvercoat.size;
	this->price = assignOvercoat.price;
}

bool Overcoat::operator<(Overcoat greaterOvercoat)
{
	if (this->size < greaterOvercoat.price)
		return true;
}
