/*
 * ex05_08.cc
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

#include <cmath>
#include <iostream>
#include <ch05/exercises/find_max.h>

int main(int argc, char **argv) {

	int n_A = 10;
	long array_A [10] = { 0, 0, 3, 17, -444, 982, 1, 1, -10, 55 };
	int n_B = 15;
	long array_B [15] = { -99, 59, 58, 55, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };

	std::cout << "The first array: \n";
	for( int i = 0; i < n_A; i++ ) {
		std::cout << array_A[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Maximum value of this array: " << find_max( array_A, n_A )
			  << "\n";
	std::cout << std::endl;

	std::cout << "The second array: \n";
	for( int i = 0; i < n_B; i++ ) {
		std::cout << array_B[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Maximum value of this array: " << find_max( array_B, n_B );
	std::cout << std::endl;
	
	return 0;
}

