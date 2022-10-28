#include "main.h"

/**
 * _islower checks if a character is lowercase.
 * @c is the character to be checked.
 *
 * Returns 1 if character is lower and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
