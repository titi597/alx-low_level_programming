#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - program that generates random valid passwords for the 101-crackme.
 * Description: password for 101-crackme program
 * Return: 0 (success)
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d[100];

	b = 0;
	srand(time(NULL));
	for (a = 0 ; a < 100 ; a++)
	{
		d[a] = rand() % 78;
		b += (d[a] + '0');
		putchar(d[a] + '0');
		if ((2772 - b) - '0' < 78)
		{
			c = 2772 - b - '0';
			b += c;
			putchar(c + '0');
			break;
		}
	}
	return (0);
}
