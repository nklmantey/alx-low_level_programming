#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char character;
	int integer;
	long longtype;
	long long longlongtype;
	float floattype;

	printf("Size of a char: %d byte(s)\n", sizeof(character));
	printf("Size of an int: %d byte(s)\n", sizeof(integer));
	printf("Size of a long int: %d byte(s)\n", sizeof(longtype));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longlongtype));
	printf("Size of a float: %d byte(s)\n", sizeof(floattype));

	return (0);
}
