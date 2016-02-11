/*
 * uniform.cc
 * 
 * Copyright 2016 Stephen <me@stephenmeansme.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include "uniform.h"
#include <cstdlib>
#include <ctime>
#include <cmath>

double unif()
{
	return std::rand() / (double)RAND_MAX;
}

double unif(double a, double b)
{
	return (b - a) * unif() + a;
}

long unif(long a)
{
	if (a < 0)
	{
		a = -a;
	}
	if (a == 0)
	{
		return 0;
	} else {
		return (long)(unif() * a) + 1;
	}
}

void seed()
{
	srand(time(0));
}
