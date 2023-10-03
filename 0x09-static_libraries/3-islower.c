#include "main.h"
#include <ctype.h>

/**
 * _islower - entry point
 *
 * @c : is the character checked  if it is lowercase or not
 *
 * Return: always 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
