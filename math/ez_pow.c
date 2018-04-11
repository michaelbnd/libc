/*
** LIBC PROJECT, 2018
** ez_pow
** File description :
** Compute x raised to the power y
*/

#include "conversion.h"

double ez_pow(double x, double y)
{
	if (y < 0)
		return 0;
	if (y == 0)
		return (1);
	else
		return (x * ez_pow(x, y - 1));
}
