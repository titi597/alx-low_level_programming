#include <stdio.h>
#include <unistd.h>
/**
 * main - program tha print the exact line without use of printf-puts
 *
 * Return: (1)
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
