/*
 * fibs.cc
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

#include <ch05/exercises/fibs.h>

long fibs ( int n ) {
	const int MAX_ARG = 40;
	if( (n < 0) or (n > MAX_ARG) ) return -1;

	static bool is_firstrun = true;
	static long* fib_table = new long [ MAX_ARG+1 ];
	if( is_firstrun ) {
		fib_table = make_fibs( MAX_ARG+1 );
		is_firstrun = false;
	}

	return fib_table[n];

}
