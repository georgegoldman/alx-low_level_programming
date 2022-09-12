#include <stdio.h>

/**
* main - entry point
* Return: int 0
*/
int main(void)
{
	
int x = 0;
char y = 'a';

while (x < 10)
{
putchar(x + '0');
x++;
}
while (y < 'g')
{
putchar(y);
y++;
}
putchar('\n');
return (0);
}
