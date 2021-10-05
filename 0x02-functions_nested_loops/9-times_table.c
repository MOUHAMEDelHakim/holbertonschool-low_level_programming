#include "main.h"
/**
 * times_table - writes a function that prints prints the 9 times table
 */
void times_table(void)
{
	int row;
	int n;

	for (row = 0; row <= 9; row++)
	{
		for (n = 0; n <= 9; n++)
		{
			if (n == 0)
			{
				_putchar(n + '0');
			}
			else if (n * row <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n * row + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((n * row) / 10 + '0');
				_putchar((n * row) % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
