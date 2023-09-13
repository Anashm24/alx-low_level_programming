#include "main.h"

/**
 * main - Entry point 
 *
 * Description: prints the alphabet, in lowercase
 *
 * Return: always 0 (success)
 */

int print_alphabet(void)
{
	int alph;
	for(alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
	return (0);
}
	
