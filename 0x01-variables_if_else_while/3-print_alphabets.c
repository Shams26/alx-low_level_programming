#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabett in lower case
 * and the in uppercase, follow by a new line
 * Return: 0
 */
int main(void)
{
char c = 'a';

char d = 'A';

while (c <= 'z')
{
	putchar(c);
	c++;
}
while (d <= 'Z')
{
	putchar(d);
	d++;
}
putchar('\n');
return (0);
}
