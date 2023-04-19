#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function as parameter of an array
 * @array: array
 * @size: size of array
 * @action: pointer to the function
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y;

	if (array == NULL || action == NULL)
		return;
	for (y = 0; y < size; y++)
	{
		action(array[y]);
	}
}
