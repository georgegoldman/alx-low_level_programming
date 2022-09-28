#include "main.h"

/**
 * _sqrt - returns square root of a number
 * @n: int
 * @x: int
 * Return: int
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}
