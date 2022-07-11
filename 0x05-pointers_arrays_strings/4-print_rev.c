#include "main.h"
/**
 * print_rev - print in reverse
 * 
 * @s: value
 *
 * Return: 0
 */
void print_rev(char *s)
{
	while (*s > 0)
	{
		_putchar(*s);
		s--;

	}
	_putchar('\n');
}
