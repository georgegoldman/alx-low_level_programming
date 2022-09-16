#include "main.h"

/**
 * print_last_digit - return the last digit of a function
 * @i: int
 * Return: int
 */
int print_last_digit(int i)
{
	int ld = i % 10;

	if (ld < 0)
		ld *= -1;
	_putchar('0' + ld);
	return (ld);
}
