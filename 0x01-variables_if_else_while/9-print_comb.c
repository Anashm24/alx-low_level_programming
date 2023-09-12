#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: prints all possible combinations of single-digit numbers.
 *
 *Return: always 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;

		if (digit != 9)
			putchar(',');
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
