#include<stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return - Always 0 (Success)
 */
int main(void)
{
	int i, j; 
 	for(i = 0; i <= 9; i++)

	{
		
		for(j = i; j <+ 9; j++)
		{
			if( j > i)
			{
				putchar(i + '0);
				putchar(j + '0');

				if(i != 8)
			}
		}

	}

	putchar('\n'');

	return(0);

}
