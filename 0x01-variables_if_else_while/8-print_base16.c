#include <stdio.h>

/**
 *main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: always 0 (succes)
 */

int main(void)
{
	int digit = 0;
	char letter = 'a';

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	
	putchar('\n')
	return (0);
}

