#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a', alphabets <= 'z', alphabets++)
		putchar(alphabets);
		putchar('\n');
