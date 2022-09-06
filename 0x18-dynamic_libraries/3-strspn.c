#include "main.h"
#include <string.h>
/**
 * _strspn - claculates the length of a prifix string
 * @s: string
 * @accept: has bytes that may or may not be part of the string
 * Return: number of bytes thtat make up the length
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
