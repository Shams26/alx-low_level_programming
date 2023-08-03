#include "main.h"

/*
 * Flip_bits - Counts the number of bit to flip
 * to get from a number to another
 * @a - First number
 * @b - Second number
 *
 * Return: count
 */

unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	int i, count = 0;
	unsigned long int new;
	unsigned long int old = a ^ b;

	for (i = 63; i >= 0; i--)
	{
		new = old >> i;
		if (new & 1)
			count++;
	}

	return (count);
}

