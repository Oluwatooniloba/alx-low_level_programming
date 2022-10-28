#include "main.h"

/**
* print_sign - checks if n is greater than zero, equals zero or less than zero
* @n: The figure to be checked.
*
* Return: 1 for greater than, 0 for zero and -1 for less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
