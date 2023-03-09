#include "main.h"

/**
 * _puts_recursion - this is a function to print string recursively
 * @s: string param
 *
 */
void _puts_recursion(char *S)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
