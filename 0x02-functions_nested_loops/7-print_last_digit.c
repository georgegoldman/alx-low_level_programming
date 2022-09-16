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
		signed int x;
		unsigned int y;

		x = i * (-1);
		y = x % 10;
		_putchar('0' + y);
		return (y);
	}
	else
	{
		unsigned int a;

		a = i % 10;
		_putchar('0' + a);
		return (a);
	}
}
