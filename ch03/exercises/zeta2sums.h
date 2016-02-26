/*
 * zeta2sum_fwd.h
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

#ifndef ZETA2SUMS_H
#define ZETA2SUMS_H

/**
 * Approximates zeta(2) = pi^2 / 6 by summing reciprocal squares:
 * f(N) = sum_{k=1}^N 1/k^2
 *
 * NOTE: Will print an error and return 0 if N is zero or negative.
 *
 * @param N the number of summands
 * @return The approximate value of zeta(2)
 */

float zeta2sum_fwd(long N);
float zeta2sum_rev(long N);

#endif
