#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digits;

	digits = 0;

	while (digits < 10)
	{
		printf("%d", digits);
		digits++;
	}
	putchar('\n');
	return (0);
}
