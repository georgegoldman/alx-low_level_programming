#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 * @s: char
 * Return: int
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

/**
 * check - cool function
 * @s: char
 * @start: int
 * @end: int
 * @flag: int
 * Return: void
 */
void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}

/**
 * is_palindrome - a function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: char
 * Return: int
 */
int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}
