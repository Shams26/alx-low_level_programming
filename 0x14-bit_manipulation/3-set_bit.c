#include "main.h"

/*
 * set_bit - Sets a bit index to 1
 * @n: The number to change
 * @index: index of the bit to change
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

