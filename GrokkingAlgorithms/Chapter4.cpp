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

void quick_sort(int* elements, int n)
{
	if (n > 1)
	{
		int pivot = elements[0];
		int n_less = 0;
		int n_greater = 0;
		int* less = NULL;
		int* greater = NULL;

		for (int i = 1; i < n; i++)
			if (elements[i] < pivot)
				++n_less;
			else
				++n_greater;

		if (n_less > 0)
			less = new int[n_less];

		if (n_greater > 0)
			greater = new int[n_greater];

		int i_less = 0;
		int i_greater = 0;
		for (int i = 1; i < n; i++)
			if (elements[i] < pivot)
			{
				if (n_less > 0)
				{
					less[i_less] = elements[i];
					++i_less;
				}
			}
			else
			{
				if (n_greater > 0)
				{
					greater[i_greater] = elements[i];
					++i_greater;
				}
			}
		
		if (n_less > 1)
			quick_sort(less, n_less);

		if (n_greater > 1)
			quick_sort(greater, n_greater);

		for (int i = 0; i < n; i++)
		{
			if (i < n_less)
				elements[i] = less[i];

			if (i == n_less)
				elements[i] = pivot;

			if (i > n_less)
				elements[i] = greater[i - (n_less + 1)];
		}

		delete[] less;
		delete[] greater;
	}
}