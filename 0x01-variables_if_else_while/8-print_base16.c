#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, hex_number;

	n = 0;
	while (n < 16)
	{
		hex_number = n % 16;
		if (hex_number < 10)
		{
			putchar(hex_number + '0');
		}
		else
		{
			putchar(hex_number - 10 + 'a');
		}
		n++;
	}
	putchar('\n');
	return (0);
}

