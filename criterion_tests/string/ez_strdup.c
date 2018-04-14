/*
** LIBC PROJECT, 2018
** Unit tests
** File description :
** Unit tests for ez_strdup()
*/

#include <criterion/criterion.h>
#include "ez_string.h"

Test(ez_strdup, empty)
{
	char *str = ez_strdup("");

	cr_expect_str_empty(str, "");
	if (str)
		free(str);
}

Test(ez_strdup, little)
{
	char *str = ez_strdup("a");

	cr_expect_str_eq(str, "a", "");
	if (str)
		free(str);
}

Test(ez_strdup, long_str)
{
	char *str = ez_strdup("azertyuiopqsdfghjklmwxcvbn");

	cr_expect_str_eq(str, "azertyuiopqsdfghjklmwxcvbn");
	if (str)
		free(str);
}
