/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the first node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
		return (0);
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = next;
		i++;
	}
	return (i);
}
