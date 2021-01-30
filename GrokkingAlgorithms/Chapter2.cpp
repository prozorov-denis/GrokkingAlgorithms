#include <limits>
#include "Algorithms.h"

int find_smallest(int* elements, int n) // n - number of elements
{
	int smallest = 0;

	for (int i = 1; i < n; i++)
		if (elements[i] < elements[smallest])
			smallest = i;

	return smallest;
}

int* selection_sort(int* elements, int n) // n - number of elements
{
	int* sortedArray = new int[n];

	for (int i = 0; i < n; i++)
	{
		int foundIndex = find_smallest(elements, n);
		sortedArray[i] = elements[foundIndex];
		elements[foundIndex] = INT_MAX;
	}

	return sortedArray;
}