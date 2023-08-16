#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char a;
	int d;

	for (d = 0; d < 10; d++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
