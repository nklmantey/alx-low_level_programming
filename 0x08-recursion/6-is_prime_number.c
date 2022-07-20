#include "main.h"
/**
 * sqrtRec - square root
 *
 * @n: value
 *
 * Return: value
 */
int sqrtRec(int n, int m)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (n * n == m)
	{
		return (n);
	}
	return (sqrtRec(n - 1, m));
}
/*
 * _sqrt_recursion - square root
 *
 * @n: value
 *
 * Return: 1
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (sqrtRec(n / 2, n));
	}
}
/**
 * is_prime_number - check if number is prime
 *
 * @n: prime number
 *
 * Return: 1
 */
int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
	{
		return (0);
	}
	if (_sqrt_recursion(n) == -1)
	{
		return (1);
	}
	return (_sqrt_recursion(n));
}
