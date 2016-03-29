/*
 * point_on_sphere.cc
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


#include <ch04/exercises/point_on_sphere.h>
#include <cmath>
#include <ch04/examples/uniform.h>

void r3_unif(double& x, double& y, double& z) {
	x = unif(-1.0, 1.0);
	y = unif(-1.0, 1.0);
	z = unif(-1.0, 1.0);
}

void point_on_sphere(double& x, double& y, double& z) {
	double d = x*x + y*y + z*z;
	if( d <= 1 ) {
		d = 1 / sqrt( d ); 
		x /= d;
		y /= d;
		z /= d;
	}
}
