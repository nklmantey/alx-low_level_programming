#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: takes in a integer for size of triangle
 */
void print_triangle(int size)
{
	int row;
	int column;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
		{
			_putchar(' ');
		}
		for (i = row + column; i >= 1; i--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
