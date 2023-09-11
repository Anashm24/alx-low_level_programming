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
	char ch = '0'

	while (ch <= '10')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
