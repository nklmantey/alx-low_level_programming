#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal
 *
 * @n: line
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
