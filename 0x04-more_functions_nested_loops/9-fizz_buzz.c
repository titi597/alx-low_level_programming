#include <stdio.h>

/**
 * main - printing number from 1 to 100 with fizz and buzz
 * Return: 0 (success)
 */

int main(void)
{
	int a;

	for (a = 1 ; a <= 100 ; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
			printf("%s", "FizzBuzz");

		else if (a % 3 == 0)
			printf("%s", "Fizz");

		else if (a % 5 == 0)
			printf("%s", "Buzz");

		else
			printf("%d ", a);
		if (a == 100)
			continue;
		printf(" ");
	}

	printf("\n");
	return (0);
}
