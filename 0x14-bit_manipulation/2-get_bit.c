#include "main.h"

/*
 * get_bit - Prints a bit info of a given
 * value
 * @bit - Get bit values
 *
 * Return: bits
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bits;

	if (index > 63)
		return (-1);

	bits = (n >> index) & 1;

	return (bits);
}
