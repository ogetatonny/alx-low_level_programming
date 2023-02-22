#include "main.h"

/**
 * _abs -function that computes absolute value of integer
 *
 * @n: the function parameter
 * Return: n when successful
 */

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);

}
