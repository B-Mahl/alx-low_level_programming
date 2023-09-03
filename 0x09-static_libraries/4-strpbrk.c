/**
 * _strpbrk - finds the first occurrence of any character in the accept string within the s string
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing characters to search for in s
 *
 * Return: pointer to the location in the s string where the match was found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
