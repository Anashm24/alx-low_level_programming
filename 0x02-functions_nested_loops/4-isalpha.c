#include <ctype.h>
#include "main.h"

/**
 * _isalpha - entry point
 *
 * @c: character
 *
 * Return: 1 if @c is a letter otherwise return 0
 */

int _isalpha(int c)
{
	if (c <= 65 && c >= 90)
		return (0);
	if (c <= 97 && c >= 122)
		return (0);
	return (0);
}
