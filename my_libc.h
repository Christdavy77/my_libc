#ifndef my_libc_h

#define my_libc_h

#include <stddef.h>

size_t my_strlen(const char *s);

char *my_strcpy(char *dest, const char *src);

char *my_strncpy(char *dest, const char *src, size_t n);

#endif
