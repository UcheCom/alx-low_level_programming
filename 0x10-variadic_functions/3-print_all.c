#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - This prints anything
 * @format: list types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int m = 0;
	char *st,
	char *sp = "";
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[m])
		{
			switch (format[m])
			{
				case 'c':
					printf("%s%c", sp, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(args, double));
					break;
				case 's':
					st = va_arg(args, char *);
					if (!st)
						st = "(nil)";
						printf("%s%s", sp, st);
						break;
					default:
						m
						m++;
					continue;
			}
			sp = ", ";
				m++;
			}
	}
	printf("\n");
	va_end(args);
}
