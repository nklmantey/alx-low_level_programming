#include "main.h"
/**
 * _strcmp - compare strings
 * @s1: value
 * @s2: value
 *
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
