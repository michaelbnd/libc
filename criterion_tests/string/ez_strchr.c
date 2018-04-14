/*
** LIBC PROJECT, 2018
** Unit tests
** File description :
** Unit tests for ez_strchr()
*/

#include "criterion/criterion.h"
#include "../include/string.h"

Test(ez_strchrtr, empty)
{
	cr_expect_eq(ez_strchr("", 'A'), NULL);
}

Test(ez_strchr, empty1)
{
	char *str = "";
	cr_expect_eq(ez_strchr(str, '\0'), str);
}

Test(ez_strchr, first_char)
{
	char *str = "abcdef";

	cr_expect_eq(ez_strchr(str, 'a'), str);
}

Test(ez_strchr, last_char)
{
	char *str = "abcdef";

	cr_expect_eq(ez_strchr(str, 'f'), str + 5);
}

Test(ez_strchr, not_in_str)
{
	cr_expect_eq(ez_strchr("azertyuioopqsdfghjklmwxcvbn123456789", '0'), NULL);
}
