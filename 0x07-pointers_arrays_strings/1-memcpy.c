#include "main.h"

/**
 * *_memcpy - Function that copy memory area
 * @dest: memory area
 * @src: bytes from memory area
 * @n: number of copy
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
