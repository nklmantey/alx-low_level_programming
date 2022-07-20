#include "main.h"
/**
 * sqrtRec - square root
 *
 * @start: starting
 *
 * @end: last number
 *
 * @m: given number
 *
 * Return: 1
 */
int sqrtRec(int start, int end, int m)
{
	long mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == m)
		{
			return (mid);
		}
		if (mid * mid > m)
		{
			return (sqrtRec(start, mid - 1, m));
		}
		if (mid * mid < m)
		{
			return (sqrtRec(mid + 1, end, m));
		}
	}
	return (-1);
}
/**
 * _sqrt_recursion - square root
 *
 * @n: value
 *
 * Return: value
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrtRec(2, n, n));
}
