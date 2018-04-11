/*
** LIBC PROJECT, 2018
** Unit tests
** File description :
** Unit tests for ez_pow()
*/

#include "criterion/criterion.h"
#include "conversion.h"

Test(ez_pow, zero)
{
	cr_expect_eq(ez_pow(0, 0), 1);
}

Test(ez_pow, zero1)
{
	cr_expect_eq(ez_pow(100, 0), 1);
}

Test(ez_pow, basic)
{
	cr_expect_eq(ez_pow(300, 2), 90000);
}

Test(ez_pow, big)
{
	cr_expect_eq(ez_pow(2, 30), 1073741824);
}

Test(ez_pow, floating)
{
	cr_expect_float_eq(ez_pow(1.1, 3), 1.331, 0.00000001);
}

Test(ez_pow, floating1)
{
	cr_expect_float_eq(ez_pow(2.5, 5), 97.65625, 0.00000001);
}

Test(ez_pow, min)
{
	cr_expect_eq(ez_pow(2.5, -2147483648), 0);
}

Test(ez_pow, neg_x)
{
	cr_expect_eq(ez_pow(-40, 3), -64000);
}

Test(ez_pow, neg_y)
{
	cr_expect_float_eq(ez_pow(2, -1), 0.5, 0.000000001);
}

Test(ez_pow, neg_y1)
{
	cr_expect_float_eq(ez_pow(10, -4), 0.0001, 0.000000001);
}
