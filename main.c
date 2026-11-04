#include <stdio.h>
#include <string.h>
#include "my_libc.h"

int
main(void)
{
	char a[20] = "Bon";
	char b[20] = "Bon";
	char c[20] = "";
	char d[20] = "";
	char e[20] = "xy";
	char f[20] = "xy";
	char g[20] = "abc";
	char h[20] = "abc";

	printf("n < len(src) : [%s] [%s]\n", my_strncat(a, "jour", 2),
	    strncat(b, "jour", 2));
	printf("dst vide     : [%s] [%s]\n", my_strncat(c, "abc", 10),
	    strncat(d, "abc", 10));
	printf("n = 0        : [%s] [%s]\n", my_strncat(e, "abc", 0),
	    strncat(f, "abc", 0));
	printf("src vide     : [%s] [%s]\n", my_strncat(g, "", 5),
	    strncat(h, "", 5));

	return (0);
}