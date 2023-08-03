#include "main.h"

/*
 * binary_to_uint - converts a binary number to unsigned int
 * @b - Binary
 *
 * Return: binary int.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int val_out = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		val_out = 2 * val_out + (b[i] - '0');
	}

	return (val_out);
}
