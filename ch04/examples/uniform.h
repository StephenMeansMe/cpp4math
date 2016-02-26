/*
 * uniform.h
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

#ifndef UNIFORM_H
#define UNIFORM_H

/**
 * Generate a random number between 0 and 1.
 * @return a uniform random number in [0, 1].
 */
double unif();

/**
 * Generate a random number in a real interval.
 * @param a one end point of the interval.
 * @param b the other end point of the interval.
 * @return a uniform random number in [a, b].
 */
double unif(double a, double b);

/**
 * Generate a random integer between 1 and a given value.
 * @param n the largest value this procedure can produce.
 * @return a uniform random value in {1, 2,..., n}.
 */
long unif(long a);

/**
 * Reset the random number generator based on the system clock.
 */
void seed();

#endif
