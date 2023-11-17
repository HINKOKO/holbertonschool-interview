#ifndef __REGEX__
#define __REGEX__

/* Macro directive for lauching the tests */
#define TEST_MATCH(s, p) do { \
	{ \
		int res = regex_match(s, p);\
		printf("%s -> %s = %d\n", s, p, res);\
	} \
} while (0)

#include <stdio.h>
#include <stdlib.h>

int regex_match(char const *str, char const *pattern);

#endif /* __REGEX__ */
