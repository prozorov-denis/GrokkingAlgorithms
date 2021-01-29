#include <limits>

int find_smallest(int* elements, int n) // n - number of elements
{
	int smallest = elements[0];

	for (int i = 1; i < n; i++)
		if (elements[i] < smallest)
			smallest = elements[i];

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