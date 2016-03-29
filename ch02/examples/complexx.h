/*
 * complexx.h
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

/*!
 * \file complexx.h
 * \brief A header file that adds convenient extensions for working with complex numbers.
 */

#ifndef COMPLEXX_H
#define COMPLEXX_H

#include <complex>
using namespace std;

/*!
 * We define C to be an abbreviation for complex<double>.
 */
typedef complex<double> C;

/*!
 * We define i to be a constant equal to sqrt(-1), i.e., C(0.0, 1.0).
 */
const C i = C( 0.0, 1.0 );

#endif
