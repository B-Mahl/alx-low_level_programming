#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds  positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if an error occured and 0 if successful
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;
	int j;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] > 57 || *argv[i] < 48)
		{
			printf("Error\n");

			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
