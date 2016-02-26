/*
 * sylvester.cc
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

#include <ch04/exercises/sylvester.h>
#include <cmath>
#include <iostream>
#include <ch04/examples/uniform.h>

int four_pt_convex( bool circle )
{

	float x1, y1;
	float x2, y2;
	float x3, y3;
	float x4, y4;

	if( circle )
	{
		rcircle(x1, y1);
		rcircle(x2, y2);
		rcircle(x3, y3);
		rcircle(x4, y4);
	}
	else  // triangle
	{
		rtriangle(x1, y1);
		rtriangle(x2, y2);
		rtriangle(x3, y3);
		rtriangle(x4, y4);
		
	}
	
	std::cout << x1 << '\t' << y1 << '\n';
	std::cout << x2 << '\t' << y2 << '\n';
	std::cout << x3 << '\t' << y3 << '\n';
	std::cout << x4 << '\t' << y4 << '\n' << '\n';

	int isConvex;
	check_convex( x1, y1,
				  x2, y2,
				  x3, y3,
				  x4, y4,
				  isConvex );
	return isConvex;
}

void rcircle(float& x, float& y)
{
	const float twopi = 2 * M_PI;
	x = unif(0.0, 1.0) * cos( unif(0.0, twopi ) );
	y = unif(0.0, 1.0) * sin( unif(0.0, twopi ) );
}

void rtriangle(float& x, float& y)
{
	x = unif(0.0, 1.0);
	y = unif(0.0, 1.0 - x);
}

void check_convex( float x1, float y1,
				   float x2, float y2,
			       float x3, float y3,
			       float x4, float y4,
			       int& isConvex )
{
	float crossprod1 = ( x2 - x1 ) * ( y3 - y2 ) - ( x3 - x2 ) * ( y2 - y1 );
	float crossprod2 = ( x3 - x2 ) * ( y4 - y3 ) - ( x4 - x3 ) * ( y3 - y2 );
	float crossprod3 = ( x4 - x3 ) * ( y1 - y4 ) - ( x1 - x4 ) * ( y4 - y3 );
	float crossprod4 = ( x1 - x4 ) * ( y2 - y1 ) - ( x2 - x1 ) * ( y1 - y4 );

	bool sign1 = ( crossprod1 > 0 );
	bool sign2 = ( crossprod2 > 0 );
	bool sign3 = ( crossprod3 > 0 );
	bool sign4 = ( crossprod4 > 0 );
	
	bool allPositive = sign1 and sign2 and sign3 and sign4;
	bool allNegative = !sign1 and !sign2 and !sign3 and !sign4;

	if( allPositive or allNegative )
	{
		isConvex = 1;
	}
	else
	{
		isConvex = 0;
	}
}
