#include <stdio.h>

/**
 * main - Program Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int h;

	for (h = 0; h < 10; h++)
	{
		putchar(h + '0');
		if (h < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
