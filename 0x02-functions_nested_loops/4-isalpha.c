#include "main.h"

/**
 * _isalpha - checks for alphabets
 *
 * @c: The ASCII code
 *
 * Return: 1 if it an alphabet
 * and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
