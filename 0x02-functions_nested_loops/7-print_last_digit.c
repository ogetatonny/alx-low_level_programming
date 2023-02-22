#include "main.h"

/**
 * print_last_digit- function that prints the last digit
 * @i-function paramter
 *
 * Return: k when succesful
int print_last_digit(int i)
{
	int k;

	k = (i % 10);
	if (i < 0)
		k = -k;
	return (k);
	_putchar(k + '0');
}
