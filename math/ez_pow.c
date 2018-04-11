/*
** LIBC PROJECT, 2018
** ez_pow
** File description :
** Compute x raised to the power y
*/

#include "math.h"

double ez_pow(double x, int y)
{
	if (y == INT_MIN)
		return 0;
	if (y < 0)
		return (1 / ez_pow(x, -y));
	if (y == 0)
		return (1);
	return (x * ez_pow(x, y - 1));
}
