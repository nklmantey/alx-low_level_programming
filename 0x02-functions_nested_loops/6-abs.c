#include "main.h"
/**
 * _abs - entry point
 *
 * @abs: value
 *
 * Return: Always 0 (Success)
 */
int _abs(int abs)
{
	if (abs >= 0)
	{
		return (abs);
	}
	else
	{
		return (abs * -1);
	}
}
