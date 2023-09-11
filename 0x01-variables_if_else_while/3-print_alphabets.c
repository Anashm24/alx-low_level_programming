#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  prints the alphabet in lowercase, and then in uppercase using the putchar function
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}	
