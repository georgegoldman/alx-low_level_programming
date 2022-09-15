#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char a;
	while (i < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		i++;
	}
}
