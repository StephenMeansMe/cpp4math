/*
 * gcd.h
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

#ifndef GCD_H
#define GCD_H

/*! \fn long gcd(long a, long b)
 *  \brief Calculate the greatest common divisor of two integers.
 *
 *  \warning gcd(0,0) will return 0 and print an error message.
 *  \return the greatest common divisor of a and b
 */

long gcd
(
		long a, //! \param a the first integer
		long b  //! \param b the second integer
);

/*! \fn long gcd(long a, long b, long& x, long& y)
 *  \brief An extended procedure for calculating the greatest common divisor.
 *
 *  Calculates the gcd of a and b, and finds integers x and y such that
 *  a * x + b * y = gcd(a, b) 
 *
 * \return the greatest common divisor of a and b
 */

long gcd
(
		long  a, //! \param a the first integer
		long  b, //! \param b the second integer
		long& x, //! \param x the coefficient of a (to be determined)
		long& y  //! \param y the coefficient of b (to be determined)
);

#endif
