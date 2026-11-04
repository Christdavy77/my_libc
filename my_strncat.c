#include "my_libc.h"

char *
my_strncat(char *dst, const char *src, size_t n)
{
	size_t i = 0;
	size_t j = 0;

	while (dst[i] != '\0')
		i++;
	while (j < n && src[j] != '\0') {
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';

	return (dst);
}