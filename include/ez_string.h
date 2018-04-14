/*
** LIBC PROJECT, 2018
** String
** File description :
** String related functions.
*/

#include <stddef.h>

size_t ez_strlen(char const *);
char *ez_strchr(const char *s, char c);
char *ez_strcpy(char *dst, const char *src);
char *ez_strdup(const char *s1);
int ez_strcmp(const char *s1, const char *s2);
