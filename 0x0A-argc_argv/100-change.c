#include <stdio.h>
#include <stdlib.h>

/**
 * Main -> prints minimal number of coins
 * @argc: number of arguments
 * @argv: an array of the command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int result = 0, num, i;
	int coin[] = {25, 10, 5, 1};

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
		while (num >= coin[i])
		{
			num -= coin[i];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
