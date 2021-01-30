#include "Algorithms.h"

int fact(int n)
{
	if (n > 0)
		if (n == 1)
			return 1;
		else
			return n * fact(n - 1);
	else
		return -1;
}