#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabet
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
			_putchar(j);
		_putchar('\n');
	}
}
