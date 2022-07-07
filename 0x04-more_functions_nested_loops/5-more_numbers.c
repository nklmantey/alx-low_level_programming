#include "main.h"

/**
 * more_numbers - print numbers
 */

void more_numbers(void)
{
	int count;
	int start;

	for (count = 0; count < 10; count++)
	{
		for (start = 0; start < 15; start++)
		{
			if (start > 9)
			{
				_putchar((start / 10) + '0');
				_putchar((start % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
