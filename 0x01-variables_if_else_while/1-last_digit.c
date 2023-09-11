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
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	printf("Last digit of ");
	printf("%d ", n);
	if (n > 5)
		printf("is %d and is greater than 5\n", digit);
	else if (n == 0)
		printf("is %d and is 0\n", digit);
	else
		printf("is %d and is less than 6 and not 0\n", digit);
	return (0);
}
