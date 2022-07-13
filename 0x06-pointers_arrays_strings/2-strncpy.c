#include "main.h"
/**
 * _strncpy - copy number
 * @dest: value
 * @src: value
 * @n: value
 *
 * Return: pointer
 */
char *_strncpy( char *dest, char *src, int n)
{
	int i = 0;
	int s = 0;

	while (src[i++])
	{
		s++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = s; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
