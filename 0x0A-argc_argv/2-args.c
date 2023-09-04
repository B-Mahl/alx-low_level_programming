#include <stdio.h>
/**
 * main - prints all arguments it recieves
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	for (int j = 0; j < argc; j++)
		printf("%s\n", argv[j]);

	return (0);
}

