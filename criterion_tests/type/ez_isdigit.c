/*
** LIBC PROJECT, 2018
** Unit tests
** File description :
** Unit tests for ez_isdigit()
*/

#include <criterion/criterion.h>
#include "ez_type.h"

Test(ez_isdigit, zero)
{
	cr_expect_eq(ez_isdigit('0'), 1);
}

Test(ez_isdigit, nine)
{
	cr_expect_eq(ez_isdigit('9'), 1);
}

Test(ez_isdigit, letter)
{
	cr_expect_eq(ez_isdigit('a'), 0);
}

Test(ez_isdigit, before_zero)
{
	cr_expect_eq(ez_isdigit('0' - 1), 0);
}

Test(ez_isdigit, after_nine)
{
	cr_expect_eq(ez_isdigit('9' + 1), 0);
}
