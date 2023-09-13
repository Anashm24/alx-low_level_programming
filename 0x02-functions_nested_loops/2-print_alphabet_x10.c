#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description:  function that prints 10 times the alphabet, in lowercase
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int line;

	for (line = 0; line < 9; line++)
	{
		int alph;

		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alpha);
	}
	_putchar('\n');
}
