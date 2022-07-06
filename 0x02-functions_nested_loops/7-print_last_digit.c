#include "main.h"
/**
 * print_last_digit - entry point
 *
 * @pld: value
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int pld)
{
	int num;

	num = pld % 10;
	if (num > 0)
	{
		_putchar(num);
		return (num);
	}
	else
	{
		_putchar(-num);
		return (-num);
	}
}
