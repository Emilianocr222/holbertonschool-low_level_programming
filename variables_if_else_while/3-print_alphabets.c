#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and then in uppercase
 *
 * Return: If it comes out 0, everything is fine.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
