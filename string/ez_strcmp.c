/*
** LIBC PROJECT, 2018
** ez_strcmp
** File description :
** Lexicographically compare the null terminated strings s1 and s2.
*/

#include "ez_string.h"

int ez_strcmp(const char *s1, const char *s2)
{
	while (*s1) {
		if (*s1 > *s2)
			return 1;
		if (*s1++ < *s2++)
			return -1;
	}
	return 0;
}
