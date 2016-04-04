/*
 * make_fibs.cc
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

#include <ch05/exercises/make_fibs.h>
#include <cassert>
#include <iostream>

long* make_fibs( int n ) {

	assert( n >= 2 );
	long* fibs = new long[ n ];
	for( int i = 0; i < n; i++ ) {
		
		if( i == 0 ) fibs[i] = 1;
		if( i == 1 ) fibs[i] = 1;
		if( i >= 2 ) fibs[i] = fibs[ i-1 ] + fibs[ i-2 ];
		
	}
	std::cout << "Generating Fibonaccis... \n";
	
	return fibs;
}
