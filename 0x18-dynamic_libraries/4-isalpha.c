#include "main.h"

/**
 * _isalpha - Show 1 if the input is c letter, and 0 for other cases.
 *
 * @c: The character in ASCCI code
 *
 * Return: 1 for letters and 0 for other cases.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
