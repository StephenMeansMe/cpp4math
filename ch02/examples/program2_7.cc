/*
 * program2_7.cc
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
#include <complex>

/*!
 * A program to illustrate the use of complex numbers.
 */

 typedef complex<double> C;

int main()
{
	C x( 3, 4 );   // define x = 3 + 4*i
	C z;           // declare z to be complex
	z = C( 2, 7 ); // assign z = 2 + 7*i
	C i( 0, 1 );   // define i = sqrt(-1)

	std::cout << "z = " << z << '\n';
	std::cout << "x = " << x << '\n';
	std::cout << "z + x = " << z + x << '\n';
	std::cout << "z * x = " << z * x << '\n';
	std::cout << "z / x = " << z / x << '\n';

	z = 5.0 - 4.0 * i;
	std::cout << "Now z = " << z << '\n';

	std::cout << "The real part of z is " << z.real()
	     << " and the imaginary part is " << z.imag() << '\n';
	     
	return 0;
}

