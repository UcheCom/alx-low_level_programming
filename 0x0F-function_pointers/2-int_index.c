#include "function_pointers.h"
/**
 * int_index - function searches for an integer
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func to be used to compare values
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;


	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);


	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	return (-1);
}
