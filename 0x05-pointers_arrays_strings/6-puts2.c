#include "main.h"

/**
 * puts2 - a function prints char of a str, 1st char, new line
 * @str: char*
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
