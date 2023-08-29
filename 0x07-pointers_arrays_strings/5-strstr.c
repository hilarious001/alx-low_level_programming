#include "main.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: string to be search
 * @needle: substring to be located
 *
 * Return: pointer to the begining
 * NULL if substring is not located
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
