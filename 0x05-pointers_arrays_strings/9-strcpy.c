#include <stdio.h>
#include "main.h"

/**
 * _strcpy -  function that copies the string pointed to by src, null byte (\0), to the buffer pointed to by dest
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
