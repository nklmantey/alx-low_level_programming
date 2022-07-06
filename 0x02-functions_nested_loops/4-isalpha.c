#include "main.h"
/**
 * _isalpha - entry point
 *
 * @c: ASCII code
 *
 * Return: 1 if lowercase or uppercase and 0 if not
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
