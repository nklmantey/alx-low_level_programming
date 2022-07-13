#include "main.h"
/**
 * _strcat - concatenates strings
 * @dest: value
 * @src: value
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;
	
	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
