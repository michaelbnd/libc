/*
** LIBC PROJECT, 2018
** ez_strlen
** File description :
** Returns the number of character found in the string passed as parameter.
*/

#include "ez_string.h"

size_t ez_strlen(char const *str)
{
	size_t len = 0;

	while (str[len])
		++len;
	return len;
}
