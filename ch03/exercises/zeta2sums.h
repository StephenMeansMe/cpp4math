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

float zeta2sum_fwd	//! \fn float zeta2sum_fwd
(					//! \brief Approximates zeta(2) by forward-summation.
		long N		//! \param N the number of summands
);

float zeta2sum_rev	//! \fn float zeta2sum_rev
(					//! \brief Approximates zeta(2) by reverse-summation.
		long N		//! \param N the number of summands
);

#endif
