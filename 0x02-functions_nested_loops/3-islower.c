/**
 * _islower - check latter case
 * Return: int
 * @b: char
 * @i: int
 */
int _islower(int a)
{
	char b = 'a';
	int i = 0;

	while (b <= 'z')
	{
		if (a == b)
		{
			i = 1;
		}
        	b++;
	}

	return (i);
}
