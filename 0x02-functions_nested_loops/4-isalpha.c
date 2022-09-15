/**
 * main - alphacheck console app
 * @c: int argv
 * Return: int
 */
int _isalpha(int c)
{
	int i = 0;
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z' || uppercase <= 'Z')
	{
		if(lowercase == c || uppercase == c)
		{
			i = 1;
		}
		lowercase++;
		uppercase++;
	}
	return (i);
}
