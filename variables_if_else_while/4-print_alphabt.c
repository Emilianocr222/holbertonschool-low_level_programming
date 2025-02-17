#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 *
 * Return: If it comes out 0, everything is fine.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
