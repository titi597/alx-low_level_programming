#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 (success)
 */
int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		if (x == 9)
			putchar(x + '0');
		else
		{
			putchar(x + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
