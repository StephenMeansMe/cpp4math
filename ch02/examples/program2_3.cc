/*
 * program2_3.cc
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

/*!
 * \brief Report on the size of various C++ data types.
 *
 * This program may give different results when run on different
 * computers depending on how each of the fundamental data types is
 * defined on those platforms.
 */

int main()
{
	// Integer types:
	std::cout << "The size of short is " << sizeof( short )
			  << " bytes\n";
	std::cout << "The size of int is " << sizeof( int )
              << " bytes\n";
    std::cout << "The size of long is " << sizeof( long )
              << " bytes\n";

    // long long might not exist on all computers
    std::cout << "The size of long long is " << sizeof( long long )
              << " bytes\n";

    // Character and boolean types:
    std::cout << "The size of char is " << sizeof( char ) << " bytes\n";
    std::cout << "The size of bool is " << sizeof( bool ) << " bytes\n";

    // Floating point types
    std::cout << "The size of float is " << sizeof( float )
              << " bytes\n";
    std::cout << "The size of double is " << sizeof( double )
              << " bytes\n";

    // long double might not exist on all computers
    std::cout << "The size of long double is " << sizeof( long double )
              << " bytes\n";

	return 0;
}

