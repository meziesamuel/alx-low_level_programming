#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments in the program
 * @argc: function parameter
 * @argv: function parameter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[1]);
	}
	return (0);
}
