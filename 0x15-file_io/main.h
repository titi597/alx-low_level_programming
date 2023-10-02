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
#define BUFFER_SIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
void copyFile(const char *file_from, const char *file_to);
int openFile(const char *file_name, int flags, mode_t mode);
void closeFile(int fd);
void exitWithError(int code, const char *format, ...);
void error_file(int file_from, int file_to, char *argv[]);
#endif /*MAIN_H*/

