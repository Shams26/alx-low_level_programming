#include "main.h"

/**
 * _isalpha - checks if char is alphabet
 * @c: the character to be checked
 * Return: 1 if true, 0 otherwise
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
