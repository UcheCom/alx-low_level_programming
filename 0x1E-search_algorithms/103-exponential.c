#include "search_algos.h"

/**
  * _binarysearch - Searches for a value in a sorted array of integers
  * @array: A pointer to the first element of the array to search.
  * @l: The starting index of the [sub]array to search.
  * @r: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the index where the value is located.
  */
int _binarysearch(int *array, size_t l, size_t r, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (r >= l)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = l + (r - l) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array of integes
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, r;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	r = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, r);
	return (_binarysearch(array, i / 2, r, value));
}
