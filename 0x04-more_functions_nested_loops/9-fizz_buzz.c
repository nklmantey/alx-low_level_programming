#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 */
int main(void)
{
	int o;

	for (o = 1; o < 100; o++)
	{
		if (o % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (o % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (o % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", o);
		}
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
