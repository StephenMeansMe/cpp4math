/*
 * ex03_01.cc
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

#include <ch03/examples/gcd.h>
#include <iostream>

int main()
{
	long a = 51;
	long b = 289;
	long c = gcd(a, b);
	long x = 6;
	long y = -1;

	std::cout << "The greatest common divisor of "
	          << a << " and " << b << " is " << c << ";\n";
	std::cout << "We have that "
			  << gcd(a, b, x, y) << " = " << a << "*" << x << " + "
										  << b << "*" << y << "\n";
	
	return 0;
}

