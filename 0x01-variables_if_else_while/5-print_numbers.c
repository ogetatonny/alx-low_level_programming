#include <stdio.h>

/**
 * main -  base 10 starting from 0
 *
 * Return: 0 when successful
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
