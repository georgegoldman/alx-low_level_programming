#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: int
 * @argv: char
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x, y, mul;

	if (argc != 3)
		printf("Error\n");
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mul = x * y;
		printf("%d\n", mul);
	}
	return (0);
}
