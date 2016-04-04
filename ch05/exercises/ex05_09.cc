/*
 * ex05_09.cc
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
#include <ch05/exercises/make_fibs.h>

int main(int argc, char **argv) {
	
	int n = 10;
	long* fibs = new long [n];
	fibs = make_fibs(10);

	for( int k = 0; k < 10; k++ ) {

		std::cout << fibs[k] << " ";

	}
	
	std::cout << std::endl;
	std::cout << "Expected:\n" << "1 1 2 3 5 8 13 21 34 55\n";
	delete[] fibs;
	
	return 0;
}

