#include <stdio.h>

/**
 * main - prints the power of 16
 *
 * Return: If it comes out 0, everything is fine.
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
