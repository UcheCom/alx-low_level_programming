#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array of integers
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in array
  * @value: The value to search for.
  *
  * Return: If the value is not present, -1.
  *         Otherwise, the index where the value is located.
  */
  int binary_search(int *array, size_t size, int value)
{	
  	size_t n, left, right;
	if (array == NULL)
		return (-1);
	
	for (left = 0; right = size -1; right >=left;)
	{
		printf('Searching in array: ');
		for (n = left; n < right; n++)
			printf("%d ", array[n]);
		printf("%d\n", array[i]);

		n = left + (right - left) / 2;
		if (array[n] == value)
			return (n);
		if (array[n] > value)
			right = n - 1;
		else
			left = n + 1;
	}

	return (-1);
}
