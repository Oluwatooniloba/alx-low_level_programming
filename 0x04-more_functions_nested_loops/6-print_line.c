#include "main.h"

/**
* print_line - function that draws a straight line.
* @n: number of times underscore would be printed.
*
* Return: Always 0
*/

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
