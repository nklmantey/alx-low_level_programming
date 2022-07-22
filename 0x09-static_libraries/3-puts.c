#include "main.h"
/**
 * _puts - printa a string
 *
 * @str: string
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str > 0)
	{
		_putchar(*str);
		str++;
	}		
	_putchar('\n');
}
