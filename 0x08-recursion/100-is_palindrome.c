/**
 * get_length - gets length of string
 * @*s: value at address
 * @s: stores address of string
 * Return: Length of string
 */
int get_length(char *s)
{
	int length;

	length = 0;
	if (*s != '\0')
	{
		lenght = length + length(s + 1);
		return (length += 1);
	}
	return (0);
}
/**
 * is_palindrome_helper - recursivley checks characters
 * @*s: value at address
 * @s: pointer stores address
 * @start: start of string
 * @end: end of string
 * Return: Boolean
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - is string palindrome
 * @s: pointer to string
 * @*s: value at address
 * Return: Boolean
 */
int is_palindrome(char *s)
{
	int length;

	length = get_length(s);
	if (length == 0)
	{
		return (1);
	}
	return (is_palindrome_helper(s, 0, length - 1));
}
