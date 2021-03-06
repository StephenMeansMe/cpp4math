/*
 * gcd.cc
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


#include <ch03/examples/gcd.h>
#include <iostream>

long gcd( long a, long b )
{

	// if a and b are both zero, print an error and return 0
	if( (a == 0) && (b == 0) )
	{
		std::cerr << "WARNING: gcd called with both arguments equal to zero.\n";
	}
	
	// make sure a and b are both non-negative
	if ( a < 0 )
	{
		a = -a;
	}
	if ( b < 0 )
	{
		b = -b;
	}

	/*
	 * We use the fact that gcd(a, b) = gcd(b, c) where c = a mod b. Note
	 * that if b is zero, gcd(a, b) = gcd(a, 0) = a. If a is zero, and b is not,
	 * we get a mod b equal to zero, so new_b will be zero, hence b will be zero
	 * and the loop will exit with a == 0, which is what we want.
	 */

	long new_a;
	long new_b;

	while( b != 0 )
	{
		new_a = b;
		new_b = a % b;
		a = new_a;
		b = new_b;
	}

	return a;

	/** TRIAL DIVISION
	 *
	 * long d; // d will be the divisor we want
     *
	 * for (long t = 1; t <= a; t++) {
	 *    if ( (a % t == 0) && (b % t == 0) ) {
	 *	     d = t;
	 *	  }
	 * }
	 *
	 */

	/** RECURSION
	 * // if a is zero, the answer is b
	 * if (a == 0) {
	 *    return b;
	 * }
	 * // if b is zero, the answer is a
	 * if (b == 0) {
	 *    return a;
	 * }
	 * 
	 * long c = a & b;
	 * return gcd(b, c);
	 */
	
}

long gcd( long a, long b, long& x, long& y )
{
	long d; // the final gcd

	//in case b = 0, we have d = |a|, x = 1 or -1, y arbitrary (say 0)
	if( b == 0 )
	{
		if( a < 0 )
		{
			d = -a;
			x = -1;
			y = 0;
		}
		else
		{
			d = a;
			x = 1;
			y = 0;
		}
		return d;
	}
	if( b < 0 )
	{
		d = gcd( a, -b, x, y );
		y = -y;
		return d;
	}
	if( a < 0 )
	{
		d = gcd( -a, b, x, y );
		x = -x;
		return d;
	}

	// set up recursion
	long aa = b;
	long bb = a % b;
	long qq = a / b;
	long xx;
	long yy;

	d = gcd( aa, bb, xx, yy );

	x = yy;
	y = xx - qq * yy;

	return d;
}
