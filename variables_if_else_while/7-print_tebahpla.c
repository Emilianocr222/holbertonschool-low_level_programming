#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse order
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');
	return (0);
}
