#include <stdio.h>

/**
 * main - main single digit numbers
 *
 * Return: 0 when successful
 */

int main(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
