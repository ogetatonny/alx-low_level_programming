#include <stdio.h>

/**
 * main - lowercase alphabet in reverse
 *
 * Return: 0 when successful
 */

int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
		putchar (m);
	putchar ('\n');
	return (0);

}
