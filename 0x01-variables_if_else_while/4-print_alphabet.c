#include<stdio.h>

/**
 * main - prints alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{

		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}

	}
	putchar('\n')
	return (0);
}
