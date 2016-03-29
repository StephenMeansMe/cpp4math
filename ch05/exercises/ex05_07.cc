/*
 * ex05_07.cc
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

int main(int argc, char **argv) {

	const int N = 19;
	long* a = new long[N];
	long* b = new long[N];

	a[0] = 1; b[0] = 1;

	for( int k = 1; k < N; k++ ) {

		a[k] = b[k-1];
		b[k] = a[k-1] + 2*b[k-1];

	}

	for( int k = 0; k < N; k++ ) {
		std::cout << k << "\t";
		std::cout << a[k] << "\t";
		std::cout << b[k] << "\t";
		std::cout << double(a[k]) / double(b[k]) << "\n";
	}

	delete[] a;
	delete[] b;
	return 0;
}

