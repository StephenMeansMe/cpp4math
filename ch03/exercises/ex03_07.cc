/*
 * ex03_07.cc
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
#include <cmath>
#include <ch03/exercises/polar_conv.h>

int main()
{
	// TESTING POLAR-TO-(X,Y)

	float x1;
	float y1;
	float r1 = 1.0;
	float t1 = M_PI / 4.0;

	polar2xy( r1, t1, x1, y1 );
	std::cout << "Polar form: (" << r1 << ", " << t1 << ");\n"
			  << "(x,y) form: (" << x1 << ", " << y1 << ").\n";

	// TESTING (X,Y)-TO-POLAR

	float x2 = -sqrtf(3.0) / 2.0;
	float y2 = 0.5;
	float r2;
	float t2;
	
	xy2polar( x2, y2, r2, t2 );
	std::cout << "(x,y) form: (" << x2 << ", " << y2 << ").\n"
			  << "Polar form: (" << r2 << ", " << t2 << ");\n";
	
	return 0;
}
