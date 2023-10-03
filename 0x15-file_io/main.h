#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <errno.h>
#include <stdint.h>
#define ELF_MAGIC_SIZE 16
/* MY ElfHeader struct */
typedef struct
{
	uint8_t e_ident[ELF_MAGIC_SIZE];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
} MyElfHeader;

void displayMyElfHeader(MyElfHeader *header);
void displayMagic(const uint8_t *e_ident);
void displayClass(const uint8_t *e_ident);
#define BUFFER_SIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
char *create_buffer(char *(file));
void closeFile(int fd);
void exitWithError(int code, const char *format, ...);
void error_98(int aptr, char *buffers, char *argv[]);
void error_99(int aptr, char *buffers, char *argv[]);
void error_100(int aptr, char *buffers);
#endif /*MAIN_H*/

