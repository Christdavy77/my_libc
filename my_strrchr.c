#include "my_libc.h"

char *
my_strrchr(const char *s, int c)
{
	char ch = (char)c;
	const char *last = NULL;

	while (*s != '\0') {
		if (*s == ch)
			last = s;
		s++;
	}
	if (ch == '\0')
		return ((char *)s);

	return ((char *)last);
}