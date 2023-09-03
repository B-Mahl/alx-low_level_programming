/**
 * _memcpy - copies from source to destination
 * @dest: copy to
 * @src: copy from
 * @n: number of times
 * Return: string value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
