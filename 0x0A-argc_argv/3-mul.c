#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if unsuccessful, 0 for success
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int result;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;
	printf("%d\n", result);

	return (0);
}

