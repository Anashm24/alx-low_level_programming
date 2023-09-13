#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: for function print_alphabet
 *
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
