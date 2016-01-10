/*
 * zeta2sums.cc
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


#include <iostream>
#include "zeta2sum_fwd.h"
#include "zeta2sum_rev.h"

int main(int argc, char **argv)
{
	long N = 1000000;
	float fsum = zeta2sum_fwd(N);
	float rsum = zeta2sum_rev(N);
	float zeta2approx = 1.6449340668482264365;

	std::cout << "The approximate value of pi^2 / 6 from forward sums is: "
			  << fsum << ", with an error of " << fsum - zeta2approx << "\n";
	std::cout << "The approximate value of pi^2 / 6 from backward sums is: "
			  << rsum << ", with an error of " << rsum - zeta2approx << "\n";
	return 0;
}

