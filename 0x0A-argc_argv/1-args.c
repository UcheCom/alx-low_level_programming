#include <stdio.h>

/**
 * main - this is the function to print its name
 * @argc:argc  parameter
 * @argv: an array of commands listed
 * Return: 0 for success
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
