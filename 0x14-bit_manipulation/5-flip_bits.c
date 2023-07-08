#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int cur_val;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		cur_val = exclusive >> x;
		if (cur_val & 1)
			count++;
	}

	return (count);
}
