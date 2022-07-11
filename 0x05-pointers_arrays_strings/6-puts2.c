#include "main.h"
/**
 * puts2 - print string
 *
 * @str: string
 */
void puts2(char *str)
{
	while (*str > 0)
	{
		if (*str % 2 == '0')
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
