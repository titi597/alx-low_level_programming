#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>
/**
 * displayMagic - displaying magic
 * @e_ident: .....
 */
void displayMagic(const uint8_t *e_ident)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < ELF_MAGIC_SIZE; i++)
	{
		printf("%02x", e_ident[i]);
		if (i < ELF_MAGIC_SIZE - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
/**
 *  displayClass - displaying class
 *  @e_ident: .....
 */

void displayClass(const uint8_t *e_ident)
{
	printf("Class: ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
}
/**
 * displayMyElfHeader - Function to display ELF header information
 * @header: header information
 */
void displayMyElfHeader(MyElfHeader *header)
{
	printf("ELF Header:\n");
	displayMagic(header->e_ident);
	displayClass(header->e_ident);
}
/**
 * main - main function
 * @argc: an array
 * @argv: pointer to an array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	MyElfHeader header;
	ssize_t bytes_read;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}
	bytes_read = read(fd, &header, sizeof(MyElfHeader));

	if (bytes_read != sizeof(MyElfHeader) ||
			memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		return (98);
	}
	displayMyElfHeader(&header);
	close(fd);
	return (0);
}

