#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: 0
 */
int main(void)
{
	char v;
	int w;
	long int x;
	long long int y;
	float z;

printf("size of a char: %zu byte(s)\n", (unsigned long)sizeof(v));
printf("size of an int: %zu byte(s)\n", (unsigned long)sizeof(w));
printf("size of a long int: %zu byte(s)\n", (unsigned long)sizeof(x));
printf("size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(y));
printf("size of a float: %zu byte(s)\n", (unsigned long)sizeof(z));
return (0);
}
