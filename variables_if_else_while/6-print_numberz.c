#include <stdio.h>

/**
 * main - prints the numbers from 0 to 9 in base 10
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');

	putchar('\n');
	return (0);
}
