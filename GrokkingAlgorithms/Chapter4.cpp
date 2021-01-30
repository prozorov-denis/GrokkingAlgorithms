#include "Algorithms.h"
#include <list>

int sum(int* elements, int n, int i)
{
	if (i < n)
		return elements[i] + sum(elements, n, i + 1);
	else
		return 0;
}

int count_elements(std::list<int>* elements, std::list<int>::iterator iterator)
{
	if (iterator != elements->end())
		return 1 + count_elements(elements, ++iterator);
	else
		return 0;
}

int find_max(std::list<int>* elements, std::list<int>::iterator iterator)
{
	int max = *iterator;
	
	if (++iterator != elements->end())
	{
		int next_max = find_max(elements, iterator);
		if (max < next_max)
			max = next_max;
	}
	
	return max;
}