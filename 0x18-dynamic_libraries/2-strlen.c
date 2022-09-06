#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: Takes pointer s of type char as parameter
 *
 * Return: 0 always
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
