#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit number of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
char c = 'z';
int d = 0;

while (d < 10)
{
	putchar(d + 0);
	d++;
}
while (c <= 'f')
{
	putchar(c);
	c++;
}

putchar('\n');
return (0);
}
