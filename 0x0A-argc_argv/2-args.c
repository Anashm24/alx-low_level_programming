#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: count
 * @argv: value or parameter
 *
 * Return: 0 (succed)
 */

int main(int argc, char *argv[]
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++
	}

	return (0);
}
