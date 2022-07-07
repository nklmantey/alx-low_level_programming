#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int start;
	int count;

	for (count = 0; start < 10; count++)
	{
		for (start = 0; start < 15; start++)
		{
			_putchar(start);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
