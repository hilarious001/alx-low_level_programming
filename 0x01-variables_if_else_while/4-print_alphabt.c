#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{

	char z;

	z = 'a';
	while
		(z <= 'z') {
			if ((z != 'q' && z != 'e') && z <= 'z')
				putchar(z);
			z++;
		}
	putchar('\n');
	return (0);
}
