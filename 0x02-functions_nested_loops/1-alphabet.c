#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char start;

	for (start = 'a'; start <= 'z'; start++)
	{
		_putchar(start);
	}
	_putchar('\n');
}
