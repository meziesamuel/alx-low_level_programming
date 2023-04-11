#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new space in memory
 * @str: character
 * Return: NULL if str = NULL. Returns pointer if ptr = str
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		ptr[r] = str[r];

	return (ptr);

}
