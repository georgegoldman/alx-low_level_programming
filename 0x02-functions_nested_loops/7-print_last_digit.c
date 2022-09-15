#include "main.h"

/**
 * print_last_digit - return the last digit of a function
 * @i: int
 * Return: int
 */
int print_last_digit(int i)
{
	int get_abs = _abs(i);

	unsigned int getThelastInt = get_abs % 10;
	_putchar('0'+getThelastInt);
	return (getThelastInt);
}
