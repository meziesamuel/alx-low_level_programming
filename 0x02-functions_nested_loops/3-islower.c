#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * @c: The character in ASCII code
 *
 * Return: 1 if it is a lowercase
 * and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
	        return (0);
}
