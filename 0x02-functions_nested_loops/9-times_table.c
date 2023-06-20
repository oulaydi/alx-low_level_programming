#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: none
 */
void times_table(void)
{
	int i, j, multi;

	for (i = 0; i <= 9; i++)
	{

		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			multi = i * j;
			_putchar(44);
			_putchar(32);
			if (multi <= 9)
			{
				_putchar(32);
				_putchar(multi + 48);
			}
			else
			{
				_putchar((multi / 10) + 48);
				_putchar((multi % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
