#include <stdio.h>

/**
 * main - function prints number arguments passed
 * @argc: arguments count
 * @argv: an array of strings listed
 * Return: 0 for success
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
