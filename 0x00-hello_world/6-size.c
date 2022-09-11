#include <stdio.h>

/**
* main - this is the main function
* Return: int 0
*/
int main(void)
{
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of long long: %lu byte(s)\n", (unsigned long)sizeof(long long));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}