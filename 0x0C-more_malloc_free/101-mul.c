#include "main.h"
#include <stdlib.h>

/**
 * print_error - Prints an error message.
 */
void print_error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}

/**
 * is_valid_digit - Checks if a character is a valid digit.
 * @c: The character to check.
 * Return: 1 if it's a digit, 0 otherwise.
 */
int is_valid_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * print_result - Prints the result.
 * @result: The result to print.
 */
void print_result(long result)
{
	char buffer[20];
	int len = 0;
	int i;

	if (result == 0)
		_putchar('0');
	else
	{
		while (result)
		{
			buffer[len++] = result % 10 + '0';
			result /= 10;
		}
		for (i = len - 1; i >= 0; i--)
			_putchar(buffer[i]);
	}

	_putchar('\n');
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 *
 * Return: 0 on success, 98 on incorrect arguments, 98 on non-digit input
 */
int main(int argc, char *argv[])
{
	long result;
	int i;

	if (argc != 3)
	{
		print_error();
		return (98);
	}

	for (i = 1; i < 3; i++)
	{
		char *num = argv[i];

		while (*num)
		{
			if (!is_valid_digit(*num))
			{
				print_error();
				return (98);
			}
			num++;
		}
	}

	result = atoll(argv[1]) * atoll(argv[2]);
	print_result(result);

	return (0);
}
