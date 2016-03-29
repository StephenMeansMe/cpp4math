/*
 * ex05_01.cc
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
#include <ch05/examples/faster_totient.h>
#include <ch05/examples/sieve.h>

int main(int argc, char **argv) {

	const long TABLE_SIZE = 10000;
	long* primes = new long[TABLE_SIZE];
	sieve(TABLE_SIZE, primes);

	long* nums = new long[3];
	nums[0] = 100;
	nums[1] = 2*2*2*2*2*2*2*2*2;
	nums[2] = 6*5*4*3*2;
	
	for( int i = 0; i < 3; i++ ) {
		std::cout << "phi(" << nums[i] << ") = "
				  << totient(nums[i], primes) << "\n";
	}

	delete[] primes;
	return 0;
}
