#include <stdio.h>

/**
* main - entry point
* Return: int 0
*/
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet != 'q' || alphabet != 'e')
{
putchar(alphabet);
}
continue;
}
putchar('\n');
return (0);
}
