/*
 * program2_4.cc
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
#include <climits>   // max & min size of integer types
#include <cfloat>    // max & min size of real types

/*!
 * Print out the extreme values of various integer types.
 */

int main()
{
	std::cout << "The maximum size of a short is " << SHRT_MAX << '\n';
	std::cout << "The minimum size of a short is " << SHRT_MIN << '\n';

	std::cout << "The maximum size of an int is " << INT_MAX << '\n';
	std::cout << "The minimum size of an int is " << INT_MIN << '\n';

	std::cout << "The maximum size of a long is " << LONG_MAX << '\n';
	std::cout << "The minimum size of a long is " << LONG_MIN << '\n';

	// long long values might not exist on some computers
	std::cout << "The maximum size of a long long is " << LLONG_MAX << '\n';
	std::cout << "The minimum size of a long long is " << LLONG_MIN << '\n';

	std::cout << "The maximum positive value of a float is "
	     << FLT_MIN << '\n';
	std::cout << "The minimum epsilon value of a float is "
	     << FLT_EPSILON << '\n';
	std::cout << "The maximum value of a float is "
	     << FLT_MAX << '\n';

	std::cout << "The minimum positive value of a double is "
	     << DBL_MIN << '\n';
	std::cout << "The minimum epsilon value of a double is "
	     << DBL_EPSILON << '\n';
	std::cout << "The maximum value of a double is "
	     << DBL_MAX << '\n';

	// long double might not be defined on some systems
	std::cout << "The minimum positive value of a long double is "
	     << LDBL_MIN << '\n';
	std::cout << "The minimum epsilon value of a long double is "
	     << LDBL_EPSILON << '\n';
	std::cout << "The maximum value of a long double is "
	     << LDBL_MAX << '\n';

	return 0;
}
