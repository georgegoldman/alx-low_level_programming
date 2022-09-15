#include "main.h"

/**
 * print_last_digit - return the last digit of a function
 * @i: int
 * Return: int
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		_putchar('0' + (i * -1) % 10);
		return ((i * -1) % 10);
	}
	_putchar('0' + (i % 10));
	return ((i % 10));
}
