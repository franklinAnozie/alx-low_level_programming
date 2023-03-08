int _sqrt(int x, int y);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - recurses to find the natural
 * square root of a number
 * @x: number to calculate the sqaure root of
 * @y: iterator
 *
 * Return: the resulting square root
 */

int _sqrt(int x, int y)
{
int z;
z = x - y;
if (z == 0)
{
return (1);
}
if (z < 0)
{
return (-1);
}
return (1 + _sqrt(z, y + 2));
}
