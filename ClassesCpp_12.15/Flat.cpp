#include "Flat.h"

Flat::Flat(int size, int price)
{
	this->size = size;
	this->price = price;
}

int Flat::GetSize()
{
	return size;
}

int Flat::GetPrice()
{
	return price;
}

bool Flat::operator==(Flat otherOvercoat)
{
	if (this->size == otherOvercoat.size && this->price == otherOvercoat.price)
		return true;
	else
		return false;
}

void Flat::operator=(Flat assignOvercoat)
{
	this->size = assignOvercoat.size;
	this->price = assignOvercoat.price;
}

bool Flat::operator<(Flat greaterOvercoat)
{
	if (this->size < greaterOvercoat.price)
		return true;
}
