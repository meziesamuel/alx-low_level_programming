#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: int value
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int a, b, g = 0, d = 0;
	
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}

	d += ac;

	str = malloc(sizeof(char) * d + 1);

	if (str == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		str[g] = av[a][b];
		g++;
	}
	if (str[g] == '\0')
	{
		str[g++] = '\n';
	}

	}
	return (str);
}
