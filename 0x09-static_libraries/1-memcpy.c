#include "main.h"
/**
 * *_memcpy - copies
 * @dest: value
 * @src: value
 * @n: value
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
