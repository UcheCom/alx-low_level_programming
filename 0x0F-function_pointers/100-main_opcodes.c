#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])

{
	int bytes, n;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (n = 0; n < bytes; n++)
	{
		if (n == bytes - 1)
		{
			printf("%02hhx\n", array[n]);
			break;
		}
		printf("%02hhx ", array[n]);
	}
	return (0);
}
