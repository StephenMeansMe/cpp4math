/*
 * point_on_circle.cc
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


#include <ch04/exercises/point_on_circle.h>
#include <cmath>
#include <ch04/examples/uniform.h>

void circ_reject(double& x, double& y)
{
	double d;

	do
	{	// Generate values (x, y) in [0, 1]^2
		x = unif(0.0, 1.0);
		y = unif(0.0, 1.0);
		d = x*x + y*y;
	} while ( d <= 1 ); // until we get one that satisfies x^2 + y^2 <= 1
	
	x /= sqrt( d );  // rescale by sqrt( x^2 + y^2 )
	y /= sqrt( d );
}

void circ_unif(double& x, double& y)
{
	double t = 2 * M_PI * unif(0.0, 1.0);

	x = cos( t );
	y = sin( t );
}

