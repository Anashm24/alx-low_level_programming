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

	for (HH == 00; HH <= 23; HH++)
		for (MM == 00; MM <= 59; MM++)
		_putchar(HH':'MM);
		_putchar('\n');
	return (0);
}
