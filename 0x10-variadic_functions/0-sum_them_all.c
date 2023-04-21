#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all parameters
 * @n: number of parameters
 * @...: sum of number of parameters to be calculated
 * Return: if n == 0 - 0
 * Else the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int y, sum = 0;

	va_start(ap, n);

	for (y = 0; y < n; y++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
