#include <stdio.h>
/**
* main - entry point
* Return: int 0
*/
int main(void)
{
char alphabet = 'z';
while (alphabet >= 'a' )
{
putchar(alphabet);
alphabet--;
}
putchar('\n');
return (0);
}
