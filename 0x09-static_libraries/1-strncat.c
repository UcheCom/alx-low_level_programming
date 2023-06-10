#include "main.h"
/**
 *_strncat - a function that concatenates strings
 *@des: string copied into
 *@src: string to append
 *@n: number of bytes
 *
 *Return: pointer to resulting string destination.
 */
char *_strncat(char *des, char *src, unsigned int n)
{
	int i;
	int j;

	i = 0;
	while (des[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		des[i] = src[j];
		i++;
		j++;
	}
	return (des);
}
