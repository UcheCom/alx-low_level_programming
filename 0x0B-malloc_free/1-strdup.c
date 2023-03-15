#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: string to be copied
 * Return: On success, the _strdup function returns a pointer the duplicated string
 * returns NULL if str = NULL
 */

char *_strdup(char *str)
{

	char *oko;
	int i, r = 0;


	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;
	oko = malloc(sizeof(char) * (i + 1));


	if (oko == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		oko[r] = str[r];
	oko[r] = '\0';
	return (oko);

}
