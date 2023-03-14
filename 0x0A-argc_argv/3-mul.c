#include <stdio.h>
#include <stdlib.h>

/**
 * Main -> program that multiplies two numbers
 * @argc: number of arguments
 * @argv: an array of the command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
