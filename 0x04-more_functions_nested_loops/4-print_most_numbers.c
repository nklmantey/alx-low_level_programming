#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int start;

	for (start = '0'; start <= '9'; start++)
	{
		if (start != '2' && start != '4')
		{
			_putchar(start);
		}
	}
	_putchar('\n');
}
