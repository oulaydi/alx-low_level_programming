#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (; dest[i] != '\0'; i++)
		;

	for (; j < n; j++, i++)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
	}
	return (dest);
}
