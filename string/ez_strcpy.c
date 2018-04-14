/*
** LIBC PROJECT, 2018
** ez_strcpy
** File description :
** Copies a string into another.
*/

#include "ez_string.h"

char *ez_strcpy(char *dst, const char *src)
{
	char *temp = dst;

	while ((*temp++ = *src++));
	return dst;
}
