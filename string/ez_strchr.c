/*
** LIBC PROJECT, 2018
** ez_strchr
** File description :
** Locates the first occurrence of c in the string pointed to by s
*/

#include "string.h"

char *ez_strchr(const char *s, char c)
{
	while (*s) {
		if (*s == c)
			return (char *) s;
		++s;
	}
	return (c) ? NULL : (char *) s;
}
