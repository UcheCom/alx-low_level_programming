#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array of integers
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array..
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t n, l, h;

	if (array == NULL)
		return (-1);

	for (l = 0, h = size - 1; h >= l;)
	{
		n = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (n < size)
			printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", n);
			break;
		}

		if (array[n] == value)
			return (n);
		if (array[n] > value)
			h = n - 1;
		else
			l = n + 1;
	}

	return (-1);
}
