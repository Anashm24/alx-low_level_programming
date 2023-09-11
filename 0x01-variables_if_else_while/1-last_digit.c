#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the last digit of the number stored in the variable n
 *
 * Descrition: using the printf function
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of ");
	if (n > 5)
		printf("%d and %d is greater than 5\n", n);
	else if (n == 0)
		printf("%d and %d is 0\n", n);
	else
		printf("%d and %d is less than 6 and not 0\n", n);
	return (0);
}
