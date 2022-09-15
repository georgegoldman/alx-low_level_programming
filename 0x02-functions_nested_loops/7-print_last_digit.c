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
		unsigned int positiveVal = (i * -1);
		int getThelastInt = positiveVal % 10;
		_putchar('0'+getThelastInt);
		return (getThelastInt);
	}
	unsigned int getThelastInt = i % 10;
	_putchar('0'+getThelastInt);
	return (getThelastInt);
}
