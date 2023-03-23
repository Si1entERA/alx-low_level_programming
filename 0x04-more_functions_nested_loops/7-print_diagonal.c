#incldue "main.h"

/**
 * print_diagonal - draw diagonal lines according to parameter
 * @n: the numbers of times to print line
 *
 * Return: empty
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < n; y++)
	{
	_putchar(12);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
