#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 */

void print_numbers(void)
{
	int start;

	for (start = '0'; start <= '9' ; start++)
	{
		_putchar(start);
	}
	_putchar('\n');
}
