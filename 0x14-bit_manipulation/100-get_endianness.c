#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	if (*c == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
