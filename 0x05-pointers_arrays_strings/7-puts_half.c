#include "main.h"

/**
 * puts_half - a function that prints 1/2 of a str, followed by a new line.
 * @str: char*
 * Return: void
 */
void puts_half(char *str)
{
	int index, half;

	index = 0;
	while (str[index] != '\0')
		index++;
	half = index / 2;
	if (index % 2 == 1)
		half++;
	while (half < index)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
