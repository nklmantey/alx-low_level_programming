#include "main.h"
/**
 * _strcat - concatenates strings
 * @dest: value
 * @src: value
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int d = 0;

	while (dest[i++])
	{
		d++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[d++] = src[i];
	}
	return (dest);
}
