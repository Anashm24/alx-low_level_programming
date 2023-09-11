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
	int dgt = 0;

	while (dgt <= 9)
	{
		printf("%d", dgt);
		dgt++;
	}
	printf('\n');
	return (0);
}
