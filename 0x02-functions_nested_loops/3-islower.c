/**
 * _islower - check alphabet lower case
 * @c: First operand
 * Return: int
 */
int _islower(int c)
{
	char a = 'a';
	int i = 0;

	while (a <= 'z')
	{
		if (a == c)
		{
			i = 1;
		}
		a++;
	}
	return (i);
}
