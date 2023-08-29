#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: String to be searched
 * @accept: bytes to be searched
 *
 * Return: pointer to the matched byte
 * NULL if no set is matched
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
