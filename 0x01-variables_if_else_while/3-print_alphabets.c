#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}

	alph = 'A';

	while (alph <= 'Z')
	{
		putchar(alph);
		alph++;
	}

	putchar('\n');
	return (0);
}
