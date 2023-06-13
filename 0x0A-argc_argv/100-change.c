#include <stdio.h>
#include <stdlib.h>

/**
 * main -> prints minimum number of coins
 * @argc: argument count
 * @argv: an array of the command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int res = 0, num, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			num -= coins[i];
			res++;
		}
	}
	printf("%d\n", res);
	return (0);
}
