/*
** LIBC PROJECT, 2018
** Unit tests
** File description :
** Unit tests for ez_sqrt()
*/

#include <criterion/criterion.h>
#include "ez_conversion.h"

Test(ez_sqrt, zero)
{
	cr_expect_float_eq(ez_sqrt(0), 0, 0.00000001);
}

Test(ez_sqrt, zero1)
{
	cr_expect_float_eq(ez_sqrt(-0), 0, 0.00000001);
}

Test(ez_sqrt, one)
{
	cr_expect_float_eq(ez_sqrt(1), 1, 0.00000001);
}

Test(ez_sqrt, basic)
{
	cr_expect_float_eq(ez_sqrt(25), 5, 0.00000001);
}

Test(ez_sqrt, big)
{
	cr_expect_float_eq(ez_sqrt(1524157875019052100), 1234567890, 0.0000001);
}

Test(ez_sqrt, neg)
{
	cr_expect_float_eq(ez_sqrt(-25), 0, 0.00000001);
}

Test(ez_sqrt, floating)
{
	cr_expect_float_eq(ez_sqrt(0.1), 0.31622776601, 0.00000001);
}

Test(ez_sqrt, floating1)
{
	cr_expect_float_eq(ez_sqrt(0.01), 0.1, 0.00000001);
}
