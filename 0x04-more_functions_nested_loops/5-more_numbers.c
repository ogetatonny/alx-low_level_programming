#include "main.h"
#include <stdio.h>
/**
 * more_numbers-print more numbers
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				putchar(i);
			putchar(j % 10 + '0');
		}
		putchar('\n');
	}
}
