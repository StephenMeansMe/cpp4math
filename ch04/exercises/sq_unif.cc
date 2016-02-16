/*
 * sq_unif.cc
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

#include <ch04/exercises/sq_unif.h>
#include <cmath>
#include <ch04/examples/uniform.h>

double sq_unif()
{
	seed();
	double x1  = unif();
	double x2  = unif();
	
	double y1  = unif();
	double y2  = unif();

	double d1  = x1 - x2;
	double d2  = y1 - y2;

	double len = sqrt( d1 * d1 + d2 * d2 );	
	return len;
}

