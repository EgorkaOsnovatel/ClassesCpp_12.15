#include <iostream>
#include "Overcoat.h"

int main()
{
    Overcoat first(2, 45), second(4, 23);
    first = second;

    std::cout << first.GetSize();
}