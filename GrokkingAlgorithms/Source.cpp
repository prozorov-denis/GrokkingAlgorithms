#include <iostream>
#include <list>
#include "Algorithms.h"

int main()
{
	const int N = 100;
	int elements[N];

	for (int i = 0; i < N; i++)
		elements[i] = rand();

	quick_sort(elements, N);

	for (int i = 0; i < N; i++)
		printf("%d ", elements[i]);
	printf("\n");

	return 0;
}