/*
 * low_order_bits_problem.cc
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

/**
 * A sample linear congruential pseudo random number generator that
 * returns values in {0, 1,..., 63}.
 */
int lcg()
{
	static int state = 0;
	const long a = 17;
	const long b = 3;
	const long c = 64;
	state = (a * state + b) % c;
	return state;
}

/**
 * This main calls lcg twenty times and prints out the value modulo
 * two, and then prints twenty more values taken modulo four.
 */
int main()
{
	std::cout << "Values modulo 2: ";
	for (int k = 0; k < 20; k++)
	{
		std::cout << lcg() % 2 << " ";
	}
	std::cout << "\n";

	std::cout << "Values modulo 4: ";
	for (int k = 0; k < 20; k++)
	{
		std::cout << lcg() % 4 << " ";
	}
	std::cout << "\n";


	return 0;
}
