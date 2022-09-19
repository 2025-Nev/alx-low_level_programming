#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse order
 * @s: A pointer to an integer that will will be changed
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
