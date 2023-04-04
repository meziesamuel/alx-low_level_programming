#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory destination
 * @src: memory source
 * @n: number of bytes
 * Return: value of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
