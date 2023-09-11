#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  prints all the numbers of base 10
 *
 * Return: 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
