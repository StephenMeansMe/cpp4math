/*
 * one_zero_mult.cpp
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

#include "one_zero_mult.h"

#include <cmath>
#include <iostream>

long one_zero_mult(int n)
{
	/*
	 * Given a positive integer, returns the smallest multiple with base-10
	 * representation by the following digit-by-digit procedure:
	 *    STEP i
	 *       take 10^i mod n;
	 *       consider all possible sums mod n of previous powers of 10;
	 *       if 0 mod n is a possible sum, STOP
	 *    REPEAT STEP i+1
	 *
	 *    SPECIAL CASE:
	 *    - If the number is divisible by 2 or 5, let r be the largest power
	 * 		 among those factors, i.e. argmax{2^r | n or 5^r | n}, then the
	 *       last r digits are all 0, so start with 10^{r+1}
	 */

	 int i_max = 10;
	 
	 int* ones = new int [i_max]; 
	 int** sums;
	 sums = new int* [i_max];
	 sums[0] = new int;
	 sums[0][0] = 10 % n;

	 for (int i = 1; i < i_max; i++)
	 {
		 sums[i] = new int[];
		 
		 for(int j = 0; j < quick_trinum(i-1); j++)
		 {
			
		 }
	 }
	 for(int k = i_max - 1; k > 0; k--)
	 {
		 delete[] sums[k];
	 }
	 return m;
}

static long quick_pow10(int n)
{
	static long pow10[10] = {
		1, 10, 100, 1000, 100000,
		1000000, 10000000, 100000000, 1000000000, 10000000000
	};

	return pow10[n];

}

static long quick_trinum(int n)
{
	static long trinum[10] = {
		1, 3, 6, 10, 15, 21, 28, 36, 45, 55
	};

	return trinum[n];

}
