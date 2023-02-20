#include <stdio.h>

/**
 * main -  base 16 in lowercase
 *
 * Return: 0 when successful
 */

int main(void)
{
	int n;
	char q;

	for (n = 0 ; n < 10 ; n++)
		putchar (n + '0');
	for (q = 'a' ; q <= 'f'; q++)
		putchar(q);
	putchar('\n');
	return (0);
}
