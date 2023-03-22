#include "main.h"

/**
 * print_last_digit - prints last digit of n
 * if n < 0
 *
 * @n: the number n
 *
 * Return: d
 */

int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (n < 0)
		d = -n;
	return (d);
}
