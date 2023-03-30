#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @k: the string to be capitalized
 * Return: a pointer to the changed string
 */

char *cap_string(char *k)
{
	int i = 0;

	while (k[i])
	{
		while (!(k[i] >= 'a' && k[i] <= 'z'))
			i++;

		if (k[i - 1] == ' ' ||
		k[i - 1] == '\t' ||
		k[i - 1] == '\n' ||
		k[i - 1] == ',' ||
		k[i - 1] == ';' ||
		k[i - 1] == '.' ||
		k[i - 1] == '!' ||
		k[i - 1] == '?' ||
		k[i - 1] == '"' ||
		k[i - 1] == '(' ||
		k[i - 1] == ')' ||
		k[i - 1] == '(' ||
		k[i - 1] == '}' ||
		i == 0)
			k[i] -= 32;
		i++;
	}
	return (k);
}
