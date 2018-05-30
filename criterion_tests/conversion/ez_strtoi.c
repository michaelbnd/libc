/*
** LIBC PROJECT, 2018
** Unit tests
** File description :
** Unit tests for ez_strtoi
*/

#include <criterion/criterion.h>
#include "ez_conversion.h"

Test(ez_strtoi, empty)
{
	char *endptr;
	char *str = "";

	cr_expect_eq(ez_strtoi(str, &endptr), 0);
	cr_expect_eq(endptr, str);
}

Test(ez_strtoi, letter)
{
	char *endptr;
	char *str = "a";

	cr_expect_eq(ez_strtoi(str, &endptr), 0);
	cr_expect_eq(endptr, str);
}

Test(ez_strtoi, minus_sign)
{
	char *endptr;
	char *str = "-";

	cr_expect_eq(ez_strtoi(str, &endptr), 0);
	cr_expect_eq(endptr, str);
}

Test(ez_strtoi, minus_sign2)
{
	char *endptr;
	char *str = "-a";

	cr_expect_eq(ez_strtoi(str, &endptr), 0);
	cr_expect_eq(endptr, str);
}

Test(ez_strtoi, zero)
{
	char *endptr;
	char *str = "0";

	cr_expect_eq(ez_strtoi(str, &endptr), 0);
	cr_expect_eq(endptr, str + 1);
}

Test(ez_strtoi, minus_zero)
{
	char *endptr;
	char *str = "-0";

	cr_expect_eq(ez_strtoi(str, &endptr), 0);
	cr_expect_eq(endptr, str + 2);
}

Test(ez_strtoi, max)
{
	char *endptr;
	char *str = "2147483647";

	cr_expect_eq(ez_strtoi(str, &endptr), 2147483647);
	cr_expect_eq(endptr, str + strlen(str));
}

Test(ez_strtoi, min)
{
	char *endptr;
	char *str = "-2147483648";

	cr_expect_eq(ez_strtoi(str, &endptr), -2147483648);
	cr_expect_eq(endptr, str + strlen(str));
}

Test(ez_strtoi, overflow)
{
	char *endptr;
	char *str = "2147483648";

	cr_expect_eq(ez_strtoi(str, &endptr), 2147483647);
	cr_expect_eq(endptr, str + 9);
}

Test(ez_strtoi, overflow_1)
{
	char *endptr;
	char *str = "3333333333333";

	cr_expect_eq(ez_strtoi(str, &endptr), 2147483647);
	cr_expect_eq(endptr, str + 9);
}

Test(ez_strtoi, underflow)
{
	char *endptr;
	char *str = "-2147483649";

	cr_expect_eq(ez_strtoi(str, &endptr), -2147483648);
	cr_expect_eq(endptr, str + 10);
}

Test(ez_strtoi, underflow_1)
{
	char *endptr;
	char *str = "-3333333333333";

	cr_expect_eq(ez_strtoi(str, &endptr), -2147483648);
	cr_expect_eq(endptr, str + 10);
}
