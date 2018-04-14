/*
** LIBC PROJECT, 2018
** Unit tests
** File description :
** Unit tests for ez_strcpy()
*/

#include <criterion/criterion.h>
#include "ez_string.h"

Test(ez_strcpy, empty)
{
	char c = 'A';

	cr_expect_str_empty(ez_strcpy(&c, ""), "");
}

Test(ez_strcpy, litle)
{
	char str[] = "ZZ";

	cr_expect_str_eq(ez_strcpy(str, "A"), "A");
}

Test(ez_strcpy, same_size)
{
	char str[] = "ZZZZZZZZZZ";

	cr_expect_str_eq(ez_strcpy(str, "azertyuiop"), "azertyuiop", "");
}

Test(ez_strcpy, bigger_size)
{
	char str[] = "ZZZZZZZZZZZZZZ";

	cr_expect_str_eq(ez_strcpy(str, "azertyuiop"), "azertyuiop", "");

}
