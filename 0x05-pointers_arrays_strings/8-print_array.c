#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n ele of an arr of int, a new line
 * @a: int
 * @n: int
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
