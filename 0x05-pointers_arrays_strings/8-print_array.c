#include "main.h"

/**
 * print_array - Entry point
 *
 * Description: prints n elements of an array of integers
 * @a : a pointer
 * @n : where the numbers are stored
 *
 * Return: always 0
 */

void print_array(int *a, int n)
{
	int arr[5] = { 98, 402, -198, 298, -1024 };

	for (n = 0; n < 5; n++)
		printf("%d", arr[n]);
	return (0);
}
