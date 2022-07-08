#include <stdio.h>
/**
 * main - entry point
 * @void: nothing
 * Return: 0
 */
int main(void)
{
	long num1, num2 = 612852475143;

	for (num1 = 2; num1 <= num2; num1++)
	{
		if (num2 % num1 == 0)
		{
			num2 = num2 / num1;
			num1--;
		}
	}
	printf("%lu\n", num1);
	return (0);
}
