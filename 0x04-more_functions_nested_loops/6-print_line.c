#include "main.h"

/**
 * print_line - Fuctions that draw a straight line in the terminal
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
	if (n <= 9)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
