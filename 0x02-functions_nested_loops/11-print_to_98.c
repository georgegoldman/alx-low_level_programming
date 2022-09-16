#include "main.h"
/**
 * print_to_98 - int
 * @x: int
 * Return: void
 */
void print_to_98(int x)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", x--);
		printf("%d\n", x);
	}
	else
	{
		while (n < 98)
			printf("%d, ", x++);
		printf("%d\n", x);
	}
}
