#include "main.h"
/**
 * is_prime_helper - tests integers
 * @i: helper int
 * @n: integer to test
 * Return: value
 */
int is_prime_helper(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (is_prime_helper(i + 1, n));
	return (1);
}
/**
 * is_prime_number - prime or not
 * @n: integer to compare
 * Return: boolean
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (is_prime_helper(i, n));
}
