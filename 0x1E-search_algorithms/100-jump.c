#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array of integers
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t n, step, jmp ;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (n = jmp = 0; jmp < size && array[jmp] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jmp, array[jmp]);
		n = jmp;
		jmp += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", n, jmp);

	jmp = jmp < size - 1 ? jmp : size - 1;
	for (; n < jmp && array[n] < value; n++)
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
	printf("Value checked array[%ld] = [%d]\n", n, array[n]);

	return (array[n] == value ? (int)n : -1);
}
