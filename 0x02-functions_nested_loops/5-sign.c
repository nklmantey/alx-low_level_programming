#include "main.h"
/**
 * print_sign - entry point
 *
 * @n: ASCII code
 *
 * Return: 1 is greater than 0, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	char pos = '+';
	char zero = '0';
	char neg = '-';

	if (n > 0)
	{
		_putchar(pos);
		return (1);
	}
	else if (n = 0)
	{
		_putchar(zero);
		return (0);
	}
	else
	{
		_putchar(neg);
		return (-1);
	}
}
