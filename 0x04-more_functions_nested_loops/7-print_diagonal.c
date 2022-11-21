#include "main.h"

/**
* print_diagonal - function that draws a diagonal line.
* @n: number of times.
*
* Return: Always 0
*/
void print_diagonal(int n)
{
	int x, a;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (a = 1; a <= x; a++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
