#include "main.h"

/** 
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int start;
	int num;

	for (num = 0; num < 10; num++)
	{
		for (start = 'a'; start <= 'z'; start++)
		{
			_putchar(start);
		}
		_putchar('\n');
	}
}
