/*
 * ex04_04.cc
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

#include <ctime>
#include <iostream>
#include <ch04/exercises/point_on_circle.h>

int main()
{
	clock_t t;
	
	long n = 100000000;  // Generating 100 million points
	double x; double y;

	// Uniform generation method
	t = clock();
	for( long i = 0; i < n; i++ )
	{
		circ_unif( x, y );
	}
	t = clock() - t;
	std::cout << "Uniform method took "
			  << float(t)/CLOCKS_PER_SEC
			  << " seconds.\n";

	// Rejection method
	t = clock();
	for( long j = 0; j < n; j++ )
	{
		circ_reject( x, y );
	}
	t = clock() - t;
	std::cout << "Rejection method took "
			  << float(t)/CLOCKS_PER_SEC
			  << " seconds.\n";
	
	return 0;
}

