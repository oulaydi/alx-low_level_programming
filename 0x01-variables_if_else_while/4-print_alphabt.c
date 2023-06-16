#include <stdio.h>

/**
 * main - Entry point
 * description: 'I never thought that it would pay off'
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 97 ; i <= 122 ; i++)
{
		if (i == 101 || i == 113)
		{
			i++;
			continue;
		}
		putchar(i);
}
	putchar('\n');
	return (0);
}
