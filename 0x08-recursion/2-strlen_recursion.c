#include "main.h"

/**
 * _strlen_recursion - calculates the length of string
 * @s: string to be usedr
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}

