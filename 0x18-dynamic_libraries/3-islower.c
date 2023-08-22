#include "main.h"

/**
 * _islower - checks if char is in lowercase
 * @c: is the char to be checked
 * Return: 1 if true, 0 if otherwise
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
