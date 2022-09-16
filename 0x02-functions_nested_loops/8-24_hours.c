#include "main.h"

/**
 * void jack_bauer - minutes and hour counter
 * Return: void
 */
void jack_bauer(void)
{
	int min = 0, hr = 0, hr_rm = 0, min_rm = 0;

	while (hr <= 23)
	{
		while (min <= 59)
		{
			min_rm = min % 10;
			hr_rm = hr % 10;
			_putchar(hr/10 + '0');
			_putchar(hr_rm + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min_rm + '0');
			min++;
			_putchar('\n');
		}
		hr++;
		min = 0;
	}
}
