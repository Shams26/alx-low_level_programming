#include "main.h"

/**
 * _isupper - checks if char is uppercase
 * @c: char to check
 *
 * Return: 1, if true, 0, if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
