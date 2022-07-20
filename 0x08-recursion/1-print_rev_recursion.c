#include "main.h"
/**
 * _print_rev_recursion
 *
 * @s: value
 *
 * Return: 0;
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_print_rev_recursion(s - 1);
}
