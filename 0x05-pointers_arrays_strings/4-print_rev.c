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
	int l = 0;

	while (*s > 0)
	{
		_putchar(*s);
		s++;
		l++;

		if (l > 0)
		{
			_putchar(s[l]);
			s--;
		}
	}
	_putchar('\n');
}
