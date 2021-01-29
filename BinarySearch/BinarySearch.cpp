int binary_search(int* elements, int n, int item) // n - number of elements, item - index of needed item
{
	int low = 0;
	int high = n - 1;
	int mid = 0;

	while (low <= high)
	{
		mid = (int)((low + high) / 2);

		if (elements[mid] == item)
			return mid;
		else if (elements[mid] > item)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return -1;
}