/*
 * exhaust.cc
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
#include <ch03/examples/gcd.h>

/**
 * Find the probability that two integers in {1..n} are relatively prime.
 */

int main()
{
	long n;
	std::cout << "Enter n --> ";
	std::cin >> n;

	long count = 0;

	for( long a = 1; a <= n; a++ )
	{
		for( long b = a + 1; b <= n; b++)
		{
			if( gcd( a, b ) == 1 )
			{
				count++;
			}
		}
	}

	count = 2 * count + 1;

	std::cout << double( count ) / ( double( n ) * double( n ) ) << "\n";
	return 0;
}
