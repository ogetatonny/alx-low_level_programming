#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @j: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int j)
{
	int m, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ j;

	for (m = 63; m >= 0; m--)
	{
		current = exclusive >> m;
		if (current & 1)
			count++;
	}

	return (count);
}

