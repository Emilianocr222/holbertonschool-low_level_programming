#include <stdio.h>

/**
 * main - Write all possible combinations of single digit numbers
 *
 * Return: If it comes out 0, everything is fine.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
