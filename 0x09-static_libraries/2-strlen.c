#include "main.h"
/**
 * _strlen - returns length of string
 *
 * @s: value
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
