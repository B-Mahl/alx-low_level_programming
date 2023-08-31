#include "main.h"
/**
 * _sqrt_recursion_helper - checks for sqrt
 * @i: integer to guess
 * @n: integer to get root of
 * Return: value of root
 */
int _sqrt_recursion_helper(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = _sqrt_recursion_helper(i + 1, n);
		return (j + 1);
	}
	return (0);
}
/**
 * _sqrt_recursion - returns square root
 * @n: integer to compute sqrt of
 * Return: Sqrt of  integer
 */
int _sqrt_recursion(int n)
{
	int result = _sqrt_recursion_helper(0, n);

	if (result == -1 || result * result != n)
	return (-1);
	return (result);

}

