/*
** LIBC PROJECT, 2018
** Unit tests
** File description :
** Unit tests for ez_strlen()
*/

#include "criterion/criterion.h"
#include "../include/string.h"

Test(ez_strlen, empty)
{
	cr_expect_eq(ez_strlen(""), 0);
}

Test(ez_strlen, basic1)
{
	cr_expect_eq(ez_strlen("test"), 4);
}

Test(ez_strlen, basic2)
{
	cr_expect_eq(ez_strlen("0123456789"), 10);
}
