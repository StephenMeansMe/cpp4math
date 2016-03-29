/*
 * ex03_06.cc
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

#include <cmath>
#include <iostream>
#include <ch03/exercises/zeta2sums.h>

int main()
{
	long  N = 1000000;
	float fsum = zeta2sum_fwd( N );
	float rsum = zeta2sum_rev( N );
	const float ZETA2 = M_PI * M_PI / 6.0 ;

	std::cout << "The approximate value of pi^2 / 6 from forward sums is: "
			  << fsum << ", with an error of " << fsum - ZETA2 << "\n";
	std::cout << "The approximate value of pi^2 / 6 from backward sums is: "
			  << rsum << ", with an error of " << rsum - ZETA2 << "\n";
	return 0;
}

