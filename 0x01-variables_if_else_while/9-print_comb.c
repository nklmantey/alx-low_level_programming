#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		if (num == 9)
			printf("%d", num);
		else
			printf("%d, ", num);
	putchar('\n');
	return (0);
}
