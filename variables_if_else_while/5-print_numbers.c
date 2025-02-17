#include <stdio.h>

/**
 * main - prints the numbers from 0 to 9 in base 10
 *
 * Return: If the number is 0, everything is fine.
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");
	return (0);
}
