#include <iostream>
#include "Algorithms.h"

int main()
{
	int elements[5] = { 5, 3, 5, 4, 1 };

	for (int i = 0; i < 5; i++)
		printf("%d ", elements[i]);
	printf("\n");

	int* sorted = selection_sort(elements, 5);

	for (int i = 0; i < 5; i++)
		printf("%d ", sorted[i]);
	printf("\n");

	return 0;
}