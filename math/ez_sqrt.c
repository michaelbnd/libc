/*
** LIBC PROJECT, 2018
** ez_pow
** File description :
** Compute x raised to the power y
*/

#include "ez_math.h"

static double get_rough_estimate(double x)
{
	long n = 0;

	while ((x /= 2) > 1)
		++n;
	return (1 << (n / 2));
}

double ez_sqrt(double x)
{
	double root;

	if (x < 0)
		return 0;
	root = get_rough_estimate(x);
	for (int i = 0; i != 100; ++i)
		root = (root + x / root) / 2;
	return root;
}
