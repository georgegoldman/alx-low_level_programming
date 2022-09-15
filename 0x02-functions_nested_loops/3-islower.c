/**
 * _islower - check latter case
 * Return: int
 */
int _islower(int a)
{
	char b = 'a';
	int i;

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
