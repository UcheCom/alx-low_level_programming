#include <stdio.h>

/**
 * main - is the function to print its name
 * @argc: count of arguments
 * @argv: an array of commands listed
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
