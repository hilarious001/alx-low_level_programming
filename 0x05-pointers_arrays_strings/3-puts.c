#include "main.h"

/**
 * _puts - Function thAt prints a string
 * follow by anew line, to stdout
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
