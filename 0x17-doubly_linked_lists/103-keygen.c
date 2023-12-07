#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - main function that is used to generate a key
 * depending on a username for crackme5
 * @argc: an array variable
 * @argv: a pointer to an array
 *
 * Return: 0 on success, or 1 when an error occurs
 */
int main(int argc, char *argv[])
{
	unsigned int j, apt;
	size_t len, sum;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char ptr[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	ptr[0] = l[(len ^ 59) & 63];
	for (j = 0, sum = 0; j < len; j++)
		sum += argv[1][j];
	ptr[1] = l[(sum ^ 79) & 63];
	for (j = 0, apt = 1; j < len; j++)
		apt *= argv[1][j];
	ptr[2] = l[(apt ^ 85) & 63];
	for (apt = argv[1][0], j = 0; j < len; j++)
		if ((char)apt <= argv[1][j])
			apt = argv[1][j];
	srand(apt ^ 14);
	ptr[3] = l[rand() & 63];
	for (apt = 0, j = 0; j < len; j++)
		apt += argv[1][j] * argv[1][j];
	ptr[4] = l[(apt ^ 239) & 63];
	for (apt = 0, j = 0; (char)j < argv[1][0]; j++)
		apt = rand();
	ptr[5] = l[(apt ^ 229) & 63];
	printf("%s\n", ptr);
	return (0);
}
