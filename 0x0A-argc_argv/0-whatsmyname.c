#include <stdio.h>
#include "main.h"

/**
 * main - print name followed by new line
 * @argc: count
 * @argv: array of command line arg
 * Return: int
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
