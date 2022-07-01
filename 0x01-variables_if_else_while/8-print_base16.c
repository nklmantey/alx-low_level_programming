#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char alph = 'a';

	for (num = 0; num < 10; num++)
		printf("%d", num);
	while (alph < 'g')
	{
		putchar(alph);
		alph++;
	}
	putchar ('\n');
	return (0);
}
