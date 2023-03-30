#include "main.h"

/**
 * reverse_array - reverses the content of arrays
 * @a: array
 * @n: number of elements of array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0; i < n--; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[i] = k;
	}
}
