/*
** LIBC PROJECT, 2018
** ez_strtoi
** File description :
** Converts the string in str to an int value
*/

#include "ez_conversion.h"
#include "ez_type.h"

int ez_strtoi(char *str, char **endptr)
{
	int res = 0;
	bool neg = (*str == '-') ? 1 : 0;

	*endptr = (neg && ez_isdigit(str[1])) ? (str + 1) : str;
	while (ez_isdigit(**endptr)) {
		if (res > 214748364 || res < -214748364)
			return neg ? INT_MIN : INT_MAX;
		if (neg && res == -214748364 && **endptr > '8')
			return INT_MIN;
		if (!neg && res == 214748364 && **endptr > '7')
			return INT_MAX;
		res *= 10;
		res += neg ? -(**endptr - '0') : (**endptr - '0');
		++(*endptr);
	}
	return res;
}
