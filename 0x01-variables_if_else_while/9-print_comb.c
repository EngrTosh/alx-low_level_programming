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
	while (digits <= 9)
	{
		putchar(digits % 10 + '0');
		if (digits != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digits++;
	}
	putchar('\n');
	return (0);
}
