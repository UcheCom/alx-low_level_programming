#include "main.h"
/**
 *_strncat - a function that concatenates strings
 *@dest: string copied into
 *@src: string to append
 *@n: number of bytes
 *
 *Return: pointer to resulting string destination.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
