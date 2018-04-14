/*
** LIBC PROJECT, 2018
** Unit tests
** File description :
** Unit tests for ez_strcmp()
*/

#include <criterion/criterion.h>
#include "ez_string.h"

Test(ez_strcmp, empty)
{
	cr_expect_eq(ez_strcmp("", ""), 0);
}

Test(ez_strcmp, start)
{
	cr_expect_eq(ez_strcmp("abc", "bbc"), -1);
}

Test(ez_strcmp, end)
{
	cr_expect_eq(ez_strcmp("abcdefghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxya"), 1);
}

Test(ez_strcmp, equal)
{
	cr_expect_eq(ez_strcmp("abcdefghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxyz"), 0);
}
