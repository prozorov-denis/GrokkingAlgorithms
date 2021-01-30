#include <iostream>
#include <list>
#include "Algorithms.h"

int main()
{
	std::list<int> elements{ 1, 2, 5, 10, 2, 3, 1 };

	printf("%d", find_max(&elements, elements.begin()));

	return 0;
}