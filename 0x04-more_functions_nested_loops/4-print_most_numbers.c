#include "main.h"

/**
* print_most_numbers -  print numbers.
*
* Return: Always 0.
*/

void print_most_numbers(void)
{
	char c = 48;

	while (c <= 57)
	{
		if (c != 50 && c != 52)
	{
		_putchar(c);
	}
		c++;
	}
	_putchar('\n');
}
