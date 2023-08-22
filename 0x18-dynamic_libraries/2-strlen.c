#include "main.h"
/**
 * _strlen - returnss the len of a str
 * @s: string
 * Return: str_len
 */
int _strlen(char *s)
{
	int str_lnt = 0;

	while (*s != '\0')
	{
		str_lnt++;
		s++;
	}

	return (str_lnt);
}
