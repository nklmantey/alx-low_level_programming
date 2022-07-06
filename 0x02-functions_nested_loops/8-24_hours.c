#include "main.h"
/**
 * jack_bauer - entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hours;
	int mins;
       	
	for (hours = 00; hours < 24; hours++)
	{
		for (mins = 00; mins < 60; mins++)
		{
			_putchar(hours + ':' + mins);
			_putchar('\n');
		}
	}
}
