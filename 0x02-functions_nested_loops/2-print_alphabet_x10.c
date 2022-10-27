#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet in lowercase 10 times,
* followed by a new line.
*/
void print_alphabet_x10(void)
{
	int x = 0;
	char alphabet;

	while (x++ < 11)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);

		_putchar('\n');

	}
}
