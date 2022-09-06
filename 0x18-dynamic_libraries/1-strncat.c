#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s;

	s = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
		s[i] = dest[i];
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		s[i] = src[j];
		i++;
	}

	dest = s;

	return (dest);
}
