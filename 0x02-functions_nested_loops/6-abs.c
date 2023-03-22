#include "main.h"

/**
 * _abs - computes absolute value of i
 *
 * @i: the integer
 *
 * Return: always i
 */

int _abs(int i)
{
	if (i < 0)
		i = -(i);
	else if (i >= 0)
		i = i;
	return (i);
}
