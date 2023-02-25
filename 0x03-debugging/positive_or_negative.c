#include "main.h"

/**
 * positive_or_negative-function that prints positive or negative
 * @i:function parameter
 *
 * Return: 0 when successful
 */


void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
