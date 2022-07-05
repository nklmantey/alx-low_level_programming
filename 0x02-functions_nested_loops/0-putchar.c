#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int start;
	char word[]="_putchar";

	for (start = 0; start < 8; start++)
		_putchar(word[start]);
		_putchar('\n');
	return (0);
}
