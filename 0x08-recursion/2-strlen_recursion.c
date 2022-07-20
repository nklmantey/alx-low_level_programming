#include "main.h"
/**
 * _strlen_recursion - length of string
 *
 * @s: value
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
