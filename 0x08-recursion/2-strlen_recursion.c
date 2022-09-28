#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: char
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
