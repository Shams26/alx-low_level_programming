#include "main.h"
/**
 * _memset - fills a  memory with a distinct val
 * @s: memory to be filled
 * @b: the desired value
 * @n: n(bytes) to be changed
 * Return: new val
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
