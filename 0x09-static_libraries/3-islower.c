#include "main.h"
/**
 * _islower - entry point
 *
 * @c: ASCII code
 *
 * Return: 1 if lowercase and 0 if not
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
