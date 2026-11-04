#include "my_libc.h"

char *
my_strchr(const char *s, int c)
{
	char ch = (char)c;

	while (*s != ch) {
		if (*s == '\0')
			return (NULL);
		s++;
	}

	return ((char *)s);
}