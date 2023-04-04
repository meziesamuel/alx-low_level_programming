#include "main.h"

/**
 * _memset - fills memory with contanat byte
 * @s: the pointer
 * @b: the constant byte
 * @n: number of bytes
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[1] = b;
		n--;
	}
	return (s);
}
