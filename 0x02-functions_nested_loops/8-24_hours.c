#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: prints every minute of a day
 *
 * Return: 0 (success)
 */

void jack_bauer(void)
{
	int HH, MM;

	for (HH == 0; HH <= 23; HH++)
	{
		for (MM == 0; MM <= 59; MM++)
		{
		_putchar((HH / 10) + '0');
		_putchar((HH % 10) + '0');
		_putchar(':');
		_putchar((MM / 10) + '0');
		_putchar((MM % 10) + '0');
		_putchar('\n')
		}
	}
}
