/**
 * _pow_recursion - gives power of int
 * @x: base
 * @y: exponent
 * Return: an integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
