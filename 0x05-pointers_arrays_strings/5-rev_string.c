#include "main.h"
/**
 * rev_string - reverse string
 *
 * @s: value
 */
void rev_string(char *s)
{
	int a;
	int b;
	int c;
	char d;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	c = a;
	for (a--, b = 0; b < 1 / 2; a--, b++)
	{
		d = s[b];
		s[b] = s[a];
		s[a] = d;
	}
}
