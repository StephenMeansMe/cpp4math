/*
 * mc_primes.cc
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
#include <ch04/examples/uniform.h>
#include <ch03/examples/gcd.h>

/**
 * This main generates many pairs of values from the set {1, 2,..., n}
 * and reports how often the pairs are relatively prime. The value n
 * and the number of pairs are specified by the user.
 */
 
int main()
{
	long n;       // max el`t in the set {1, 2,..., n}
	long reps;    // number of times we perform the experiment
	long a;
	long b;       // values chosen from {1, 2,..., n}
	long count;   // number of pairs that are relatively prime

	count = 0;

	std::cout << "Enter n (maximum el`t of the set) --> ";
	std::cin >> n;

	std::cout << "Enter the number of pairs to sample --> ";
	std::cin >> reps;

	for( long k = 1; k <= reps; k++ )
	{
		a = unif( n );
		b = unif( n );
		if ( gcd( a, b ) == 1 )
		{
			++count;
		}
	}

	std::cout << count / double( reps ) << "\n";
	
	return 0;
}
