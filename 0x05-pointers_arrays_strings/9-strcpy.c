#include <stdio.h>
#include "main.h"

/**
 * _strcpy - cute func
 * @dest: char*
 * @src: char*
 * Return: char*
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
