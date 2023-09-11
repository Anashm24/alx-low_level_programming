#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  prints the alphabet in lowercase using the putchar function
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
