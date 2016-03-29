/*
 * program2_6.cc
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

/**
 * Which is larger, pi to the e or e to the pi? We calculate both to
 * find out.
 */

int main()
{
	double e  = exp( 1.0 );
	double pi = M_PI;

	std::cout << "e to the pi is " << exp( pi )    << "\n";
	std::cout << "pi to the e is " << pow( pi, e ) << "\n";
	
	return 0;
}
