#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments in the program
 * @argc: function parameter
 * @argv: function parameter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
