#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _strlen(char *str);
void errors(void);
int _isdigit(char *str);
int main(int argc, char *argv[]);
#endif
