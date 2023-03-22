#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * @c: The character in ASCII code
 *
 * Return: 1 if it is a lowercase
 * and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	        return (0);
}
