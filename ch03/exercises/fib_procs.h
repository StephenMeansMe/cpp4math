/*
 * fib_procs.h
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

#ifndef FIB_PROCS_H
#define FIB_PROCS_H

/*! \fn long fibonacci_recur(long N)
 *  \brief Generates the Nth Fibonacci number using recursion.
 *
 *  \param [in] N the index of the desired Fibonacci number.
 *  \return The Nth number in the Fibonacci sequence.
 */

long fibonacci_recur
(
		long N
);


/*! \fn long fibonacci_iter(long N)
 *  \brief Generates the Nth Fibonacci number iteratively.
 *
 *  \param N the index of the desired Fibonacci number.
 *  \return The Nth number in the Fibonacci sequence.
 */

long fibonacci_iter
(
		long N
);

#endif
