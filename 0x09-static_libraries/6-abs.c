#include <stdlib.h>
#include "main.h"

/**
 * _abs - Entry point
 *
 * @n: computes the absolute value of an int
 *
 * Return: n
 */

int _abs(int n)
{

	if (n < 0)
		n = (-1) * n;
	return (n);
}
