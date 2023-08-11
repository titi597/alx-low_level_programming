#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 (success)
 */

int main(void)
{
	int x = '0';
	int y = '0';

	while (x <= '9')
	{
		while (y <= '9')
		{
			if (x < y)
			{
				putchar(x);
				putchar(y);
				if (x != '8' || (x == '8'  && y != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
		y = '0';
	}
	putchar('\n');
	return (0);
}
