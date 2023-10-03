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
 * displayMyElfHeader - Function to display ELF header information
 * @header: header information
 */
void displayMyElfHeader(MyElfHeader *header)
{
	int i;

	printf("ELF Header:\n");
	printf("Magic: ");
	for (i = 0; i < ELF_MAGIC_SIZE; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("Class: ");
	switch (header->e_ident[4])
	{
		case 1:
			printf("ELF32\n");
			break;
		case 2:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
	printf("Data: ");
	switch (header->e_ident[5])
	{
		case 1:
			printf("2's complement, little endian\n");
			break;
		case 2:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
	printf("Version: %u (current)\n", header->e_ident[6]);
	printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
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

