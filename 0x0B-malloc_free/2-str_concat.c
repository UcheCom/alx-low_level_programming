#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = n = 0;
	while (s1[i] != '\0')
		i++;

	while (s2[n] != '\0')
		n++;

	con = malloc(sizeof(char) * (i + n + 1));
	if (con == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		con[i] = s1[i];
		i++;
	}
	n = 0;
	while (s2[n] != '\0')
	{
		con[i] = s2[n];
		i++, n++;
	}
	con[i] = '\0';
	return (con);
}
