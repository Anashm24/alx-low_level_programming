#include "main.h"
#include <stdio.h>

/**
 *  binary_to_uint -  function that converts a binary number to an unsigned int
 *  @b : a pointer to a string
 *
 *  Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int sum = 0, i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{	
			return (0);
		}
		sum = sum * 2 + (b[i] - '0');
	}
	return (sum);
}
