#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit number of base 10
 * starting from 0, followed by a new line.
 * Return: always 0 (Success)
 */
int main(void)
{
int a;

for (a = 0; a < 10; a++)
{
	putchar(a + '0');
	if (a < 9)
	{
		putchar(',');
		putchar('');
	}
}
putchar('\n');
return (0);
}
