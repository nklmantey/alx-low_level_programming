#include "main.h"
/**
 * swap_int - swap values
 *
 * @a: value 1
 *
 * @b: value 2
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
