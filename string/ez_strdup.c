/*
** LIBC PROJECT, 2018
** ez_strdup
** File description :
** Allocates memory and copies the string given as argument in it.
*/

#include "ez_string.h"
#include <stdlib.h>

char *ez_strdup(const char *s1)
{
	char *str = malloc(ez_strlen(s1) + 1);

	return str ? ez_strcpy(str, s1) : NULL;
}
