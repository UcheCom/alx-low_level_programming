#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int cur_val;

	for (x = 63; x >= 0; x--)
	{
		cur_val = n >> x;

		if (cur_val & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');

}
