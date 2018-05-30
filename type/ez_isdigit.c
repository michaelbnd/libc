/*
** LIBC PROJECT, 2018
** ez_isdigit
** File description :
** Returns true if is the char passed as parameter is a digit
*/

#include "ez_type.h"

bool ez_isdigit(char c)
{
	return ('0' <= c && c <= '9') ? 1 : 0;
}
