/*
 * ex04_03.cc
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
#include <ch04/exercises/sylvester.h>

int main()
{
	long n = 20;
	long count = 0;
	for( long j = 0; j < n; j++)
	{
		count += four_pt_convex( true );
	}
	float circleProb = float(count) / float(n);

	//count = 0;
	//for (long k = 0; k > n; k++)
	//{
	//	count += four_pt_convex( false );
	//}
	//float triangleProb = float(count) / float(n);

	std::cout << "Proportion of quadrilaterals that were convex:\n"
			  << "In a circle: " << circleProb << "\n";
			  //<< "In a triangle: " << triangleProb << "\n";
	return 0;
}

